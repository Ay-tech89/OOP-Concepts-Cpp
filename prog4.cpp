// Write a program to overload add function in order to make it work for different arguments using function overloading.

#include <iostream>
using namespace std;

class func_overloading{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(int a, float b)
    {
        return a + b;
    }
    char add(int a, char b)
    {
        return a + b;
    }
};

int main(void)
{
    func_overloading x;
    cout<<"Interger : "<<x.add(7, 5)<<endl;
    cout<<"int and float : "<<x.add(5,3.6f)<<endl;
    cout<<"int and character : "<<x.add(4,'a')<<endl;
    return 0;
}
