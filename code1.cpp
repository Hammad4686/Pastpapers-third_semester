#include <iostream>
#include <string>

class Student {
    static int enrolled_students;
    std::string first_name;
    std::string last_name;
    int year_of_birth;
    std::string registration_no;
    std::string degree_program;
    std::string email;

public:
    Student(std::string first_name, std::string last_name, int year_of_birth,
            std::string registration_no, std::string degree_program, std::string email)
        : first_name(first_name), last_name(last_name), year_of_birth(year_of_birth),
          registration_no(registration_no), degree_program(degree_program), email(email)
    {
        enrolled_students++;
    }

    std::string get_first_name() {
        return first_name;
    }

    void set_first_name(std::string first_name) {
        this->first_name = first_name;
    }

    std::string get_last_name() {
        return last_name;
    }

    void set_last_name(std::string last_name) {
        this->last_name = last_name;
    }

    int get_year_of_birth() {
        return year_of_birth;
    }

    void set_year_of_birth(int year_of_birth) {
        this->year_of_birth = year_of_birth;
    }

    std::string get_registration_no() {
        return registration_no;
    }

    void set_registration_no(std::string registration_no) {
        this->registration_no = registration_no;
    }

    std::string get_degree_program() {
        return degree_program;
    }

    void set_degree_program(std::string degree_program) {
        this->degree_program = degree_program;
    }

    std::string get_email() {
        return email;
    }

    void set_email(std::string email) {
        this->email = email;
    }

    static int total_enrolled_students() {
        return enrolled_students;
    }
};

int Student::enrolled_students = 0;

int main() {
    // Create two student objects
    Student student1("John", "Doe", 2000, "2021001", "Computer Science", "john.doe@example.com");
    Student student2("Jane", "Smith", 1999, "2021002", "Mathematics", "jane.smith@example.com");

    // Get and set student information
    std::cout << student1.get_first_name() << std::endl;  // Output: John
    student2.set_degree_program("Physics");
    std::cout << student2.get_degree_program() << std::endl;  // Output: Physics

    // Get the total number of enrolled students
    int total_students = Student::total_enrolled_students();
    std::cout << total_students << std::endl;  // Output: 2

    return 0;
}
