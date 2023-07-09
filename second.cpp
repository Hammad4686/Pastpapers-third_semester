#include <iostream>

class Algebra {
private:
    int a;
    int b;

public:
    Algebra() : a(0), b(0) {} // Default constructor

    Algebra(int aVal, int bVal) : a(aVal), b(bVal) {} // Parameterized constructor

    Algebra(const Algebra& other) : a(other.a), b(other.b) {} // Copy constructor

    // Overloading arithmetic assignment operator (+=)
    Algebra& operator+=(const Algebra& other) {
        this->a += other.a;
        this->b += other.b;
        return *this;
    }

    // Overloading unary plus operator (+)
    // bool operator+() const {
    //     return (a > 0 || b > 0);
    // }

    // Overloading stream insertion operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const Algebra& obj) {
        os << "a = " << obj.a << ", b = " << obj.b;
        return os;
    }
};


int main() {
    Algebra obj1(2,3); // Default constructor
    Algebra obj2(0, 10); // Parameterized constructor
    Algebra obj3(obj2); // Copy constructor

    std::cout << "obj1: " << obj1 << std::endl;
    std::cout << "obj2: " << obj2 << std::endl;
    std::cout << "obj3: " << obj3 << std::endl;

    obj1 += obj2; // Using the overloaded += operator

    std::cout << "obj1 += obj2: " << obj1 << std::endl;

    // if (+obj2) {
    //     std::cout << "obj2 contains data greater than zero." << std::endl;
    // } else {
    //     std::cout << "obj2 does not contain data greater than zero." << std::endl;
    // }

    return 0;
}
