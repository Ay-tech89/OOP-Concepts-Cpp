// Write a program to create class students with member variables like name, age, roll no. and function to input and print details.

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age, rollno;

public:
    Student(string n, int a, int r){
        name = n;
        age = a;
        rollno = r;
    }

    void print_details() {
        cout << "\nStudent Details :\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollno << endl;
    }
};

int main() {
    string name;
    int age, rollno;
    cout << "Enter the name: ";
    getline(cin, name);
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter roll number: ";
    cin >> rollno;
    Student s(name, age, rollno);
    s.print_details();
    return 0;
}
