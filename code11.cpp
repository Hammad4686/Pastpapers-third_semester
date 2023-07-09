#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    static int count;
    string firstname, lastname, Registerationno, yearofbirth, DegreeProgram, email;

public:
    Student(string f_N, string L_N, string R_N, string D_B, string D_P, string E_M)
    {
        firstname = f_N;
        lastname = L_N;
        Registerationno = R_N;
        yearofbirth = D_B;
        DegreeProgram = D_P;
        email = E_M;
        count++;
    }

    void Display()
    {
        cout << "Your Registration number is : " << Registerationno << endl;
        cout << "Your name is : " << firstname << " " << lastname << endl;
        cout << "The Date of birth is " << yearofbirth << endl;
        cout << "Your Degree Programe is : " << DegreeProgram << endl;
        cout << "Your Email is " << email << endl;
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
    Student s2("Irshad", "Abbas", "02", "28/02/2002", "Bs IT", "hammad@gmail.com");
    Student s3("Hammad", "Abbas", "01", "28/02/2002", "Bs IT", "hammad@gmail.com");
    s1.Display();
    int total_students = Student::countfunc();
    cout << "Total Students : " << total_students << endl;
    return 0;
}
