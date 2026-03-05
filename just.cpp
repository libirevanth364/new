#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "This is class A (Base Class)" << endl;
    }
};

// Derived class from A
class B : public A {
public:
    void displayB() {
        cout << "This is class B (Derived from A)" << endl;
    }
};

// Derived class from B
class C : public B {
public:
    void displayC() {
        cout << "This is class C (Derived from B)" << endl;
    }
};

int main() {
    C obj;

    obj.displayA();  // from class A
    obj.displayB();  // from class B
    obj.displayC();  // from class C

    return 0;
}
