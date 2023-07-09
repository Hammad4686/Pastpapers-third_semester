#include <iostream>
#include <string>

using namespace std;

class Algebra
{
private:
    int a;
    int b;

public:
    Algebra()
    {
        a = 0;
        b = 0;
    }

    Algebra(int x, int y){
        a = x;
        b = y;
    }
    Algebra( Algebra& other){
        a = other.a;
        b = other.b;
    }

    Algebra& operator+=(const Algebra& other) {
        a += other.a;
        b += other.b;
        
    }
    // stream insertion operator

    friend ostream& operator<<(ostream& out , Algebra& obj){
        out << obj.a << " " << obj.b;
        return out;
    }



};

int main()
{
    Algebra a(2,4);
    Algebra b(2,3);
    Algebra cp(b);

    cout<<"obj1 : "<<a<<endl;
    cout<<"obj2 : "<<b<<endl;
    // copy Constructor Called 
    cout<<"Copy constructor called "<<endl;
    cout<<"obj3 : "<<cp<<endl;

    a += b;
    cout<<"obj4 : "<<a<<endl;

    return 0;
}