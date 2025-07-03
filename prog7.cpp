// Write a program to find the greatest of two given numbers in two different classes using friend function.

#include <iostream>
using namespace std;

class B; 
class A {
    int num1;
public:
    A(int n) : num1(n) {}
    friend int compare(A, B);
};

class B {
    int num2;
public:
    B(int n) : num2(n) {}
    friend int compare(A, B);
};
int compare(A a, B b) {
    return (a.num1 > b.num2) ? a.num1 : b.num2;
}

int main() {
    A a(10);
    B b(20);
    cout << "Greatest number from two digits : " << compare(a, b) << endl;
    return 0;
}
