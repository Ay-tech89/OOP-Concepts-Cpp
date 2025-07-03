// Write a program to show the order of invocation of constructor and destructor using multiple inheritance.

#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A Constructor " << endl;}
    ~A() { cout << "A Destructor " << endl;}
};

class B {
public:
    B() { cout << "B Constructor " << endl;}
    ~B() { cout << "B Destructor " << endl;}
};

class C : public A, public B {
public:
    C() { cout << "Derived Constructor " << endl;}
    ~C() { cout << "Derived Destructor " << endl;}
};

int main() {
    C c;
    return 0;
}
