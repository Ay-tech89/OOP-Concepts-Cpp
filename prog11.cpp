// Write a program to create an inline function which returns the cube of a number.

#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n * n * n;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The cube of " << number << " is " << cube(number) << endl;
    return 0;
}