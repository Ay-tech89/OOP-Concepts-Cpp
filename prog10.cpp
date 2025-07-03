// Write a program to implement static variable in a class.

#include<iostream>
using namespace std;

class student{
    int rollno;
    char name[10];
    public:
    static int count;
    student(){
        count++;
    }
    void input(){
        cout<<"Enter the roll number : ";
        cin>>rollno;
        cout<<"Enter the name : ";
        cin>>name;
    }
};
int student::count=0;
int main(){
    student s1;
    s1.input();
    student s2;
    s2.input();
    cout<<"Total object created : "<<student::count<<endl;
    return 0;
}