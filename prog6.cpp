// Write a program to perform addition of two complex numbers using constructor overloading.

#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;
public:
    Complex() : real(0), img(0) {}
    Complex(int r, int i) : real(r), img(i) {}

    void display(){
        cout << real << " + " << img << "i" << endl;
    }
    Complex addComp(Complex C1, Complex C2) 
    { 
        Complex c; 
        c.real = C1.real + C2.real; 
        c.img = C1.img + C2.img; 
        return c; 
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(2, 5);
    Complex c3 = c3.addComp(c1 , c2);
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum: ";
    c3.display();
    return 0;
}
