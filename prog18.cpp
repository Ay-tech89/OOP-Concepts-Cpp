// Write a program to define the function template for calculating the square of given numbers with different data types.

#include <iostream>
using namespace std;
template <typename T>
T square(T number)
{
    return number * number;
}
int main()
{
    int num1 = 5;
    float num2 = 3.6f;
    double num3 = 3.56;
    cout << "Square of " << num1 << " is: " << square(num1) << endl;
    cout << "Square of " << num2 << " is: " << square(num2) << endl;
    cout << "Square of " << num3 << " is: " << square(num3) << endl;
    return 0;
}