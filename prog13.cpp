//  Write a program to create a car class with basic functionalities and inherit it to create a multilevel hierarchy

#include <iostream>
using namespace std;
class car1
{
public:
    void start()
    {
        cout << "car1 started." << endl;
    }
};
class Car2 : public car1
{
public:
    void stop()
    {
        cout << "car2 stopped." << endl;
    }
};
class car3 : public Car2
{
public:
    void honk()
    {
        cout << "car3 honked." << endl;
    }
};
int main()
{
    car3 c;
    c.start();
    c.stop();
    c.honk();
    return 0;
}
