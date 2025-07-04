// Write a program to solve the issue of diamond problem.

#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Base class show function." << endl;
    }
};
class Derived1 : virtual public Base
{
public:
    void show()
    {
        cout << "first Derived class show function." << endl;
    }
};
class Derived2 : virtual public Base
{
public:
    void show()
    {
        cout << "Second Derived class show function." << endl;
    }
};
class last : public Derived1, public Derived2
{
public:
    void show()
    {
        cout << "Final class show function." << endl;
    }
};
int main()
{
    last x;
    x.Base::show();
    x.Derived1::show();
    x.Derived2::show();
    x.show();
    return 0;
}
