// Write a program to overload unary operator (--) using operator overloading.

#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
    public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i){}

    void display(){
        cout<<"Feet : "<<feet<<"   Inches : "<<inches<<endl;
    }

    Distance operator++(){
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
};

int main(){
    Distance d1(-11,-9),d2(-3,7);
    ++d1;
    d1.display();
    ++d2;
    d2.display();
    return 0;
}

// #include <iostream>
// using namespace std;

// class Score {
//     int score;

// public:
//     Score() : score(0) {}

//     void operator++() {
//         ++score;
//     }

//     void display() {
//         cout << "Score : " << score << endl;
//     }
// };

// int main() {
//     Score s;
//     s.display();
//     ++s; 
//     s.display();
//     return 0;
// }

