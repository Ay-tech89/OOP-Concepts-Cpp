// Write a program to implement the concept of pure virtual functions.

#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    virtual void fun()=0;
    int getX(){return x;}
};
class derived : public Base{
    int y;
    public:
    void fun() {cout<<"fun() is called";}
};
int main(){
    derived d;
    d.fun();
    return 0;
}