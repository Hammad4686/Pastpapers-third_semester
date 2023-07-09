#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student(string firstname, string lastname, string Registerationno, string yearofbirth, string DegreeProgram, string email)
    {
        cout << "Your Registration number is : " << Registerationno << endl;
        cout << "Your name is : " << firstname << " " << lastname << endl;
        cout << "The Date of birth is " << yearofbirth << endl;
        cout << "Your Degree Programe is : " << DegreeProgram << endl;
        cout << "Your Email is " << email << endl;
        count++;
    }
    int static countfunc()
    {
        return count;
    }
};

int Student::count = 0;

int main()
{
    // Student s1("Hammad" , "Abbas" , "01", "28/02/2002", "Bs IT" "hammad@gmail.com");
    Student s1("Hammad", "Abbas", "01", "28/02/2002", "Bs IT", "hammad@gmail.com");
    cout << endl
         << endl;
    Student s2("Irshad", "Abbas", "02", "28/02/2002", "Bs IT", "hammad@gmail.com");
    cout << endl
         << endl;

    Student s3("Hammad", "Abbas", "01", "28/02/2002", "Bs IT", "hammad@gmail.com");
    cout << endl
         << endl;

    int total_students = Student::countfunc();
    cout << "Total Students : " << total_students << endl;
    return 0;
}
