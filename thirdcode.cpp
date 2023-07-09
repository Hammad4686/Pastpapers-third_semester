#include <iostream>
#include <string>

class Book {
protected:
    std::string title;
    std::string author;

public:
    void setTitle(const std::string& title) {
        this->title = title;
    }

    std::string getTitle() const {
        return title;
    }

    void setAuthor(const std::string& author) {
        this->author = author;
    }

    std::string getAuthor() const {
        return author;
    }
};

class Fiction : public Book {
private:
    int readingLevel;

public:
    void setReadingLevel(int level) {
        readingLevel = level;
    }

    int getReadingLevel() const {
        return readingLevel;
    }

    void display() {
        std::cout << "Title: " << getTitle() << std::endl;
        std::cout << "Author: " << getAuthor() << std::endl;
        std::cout << "Reading Level: " << readingLevel << std::endl;
    }
};

class NonFiction : public Book {
private:
    int numOfPages;

public:
    void setNumOfPages(int pages) {
        numOfPages = pages;
    }

    int getNumOfPages() const {
        return numOfPages;
    }

    void display() {
        std::cout << "Title: " << getTitle() << std::endl;
        std::cout << "Author: " << getAuthor() << std::endl;
        std::cout << "Number of Pages: " << numOfPages << std::endl;
    }
};

int main() {
    Fiction fictionBook;
    fictionBook.setTitle("The Great Gatsby");
    fictionBook.setAuthor("F. Scott Fitzgerald");
    fictionBook.setReadingLevel(8);

    NonFiction nonFictionBook;
    nonFictionBook.setTitle("Sapiens: A Brief History of Humankind");
    nonFictionBook.setAuthor("Yuval Noah Harari");
    nonFictionBook.setNumOfPages(443);

    std::cout << "Fiction Book Details:" << std::endl;
    fictionBook.display();

    std::cout << "\nNon-Fiction Book Details:" << std::endl;
    nonFictionBook.display();

    return 0;
}
