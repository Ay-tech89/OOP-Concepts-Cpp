// Write a program to implement the concept of call by value and call by reference.


#include <iostream>
using namespace std;

void call_by_value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Swap : x = " << x << ", y = " << y << endl;
}

void call_by_Reference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Swap : x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    cout<<"Call by value"<<endl;
    cout << "Before Swap : a = " << a << ", b = " << b << endl;
    call_by_value(a, b);
    cout << "After Swap : a = " << a << ", b = " << b << endl;

    cout<<"\nCall by Reference"<<endl;
    cout << "Before Swap : a = " << a << ", b = " << b << endl;
    call_by_Reference(a, b);
    cout << "After Swap : a = " << a << ", b = " << b << endl;
}

