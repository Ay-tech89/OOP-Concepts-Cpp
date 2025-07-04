//  Write a program to show the protected mode of inheritance in case of hierarchical inheritance.

#include <iostream>
using namespace std;

class A {
protected:
    void show() {
        cout << "Base class show function." << endl;
    }
};

class B : protected A {
public:
    void showB() {
        show();
        cout << "class B show function." << endl;
    }
};

class C : protected A {
public:
    void showC() {
        show();
        cout << "class C show function." << endl;
    }
};

int main() {
    B d1;
    C d2;

    d1.showB();
    d2.showC();

    return 0;
}

