#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        string Title , Author;
};

class Fiction: public Book{
    public:
        Fiction(string Book, string Author,int level){
            cout<<"Author name : "<<Author<<endl;
            cout<<"Book Name : "<<Book<<endl;
            cout<<"Enter Your Level : between 1 and 10";
            cin>>level;
            if (level<= 10 && level >= 1)
            {
                cout<<"Your Level is : "<<level<<endl;
            }else{
                cout<<"Enter valid input ";
            }
            
        }
};

class NonFiction: public Book{
    public:
    NonFiction(string Book, string Author,int Pages){
            cout<<"Author name : "<<Author<<endl;
            cout<<"Book Name : "<<Book<<endl;
             cout<<"Enter Your Pages : between 1 and 200";
            cin>>Pages;
            if (Pages<= 200 && Pages >= 1)
            {
                cout<<"Your Pages is : "<<Pages<<endl;
            }else{
                cout<<"Enter valid input ";
            }
        }
};

int main(){
    Fiction f("The Great Gatsby" , "F. Scott Fitzgerald" ,8);
    NonFiction("Sapiens: A Brief History of Humankind","Yuval Noah Harari",443 );
    return 0;
}