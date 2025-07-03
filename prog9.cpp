// Write a program to illustrate the use of new and delete operators.

#include<iostream>
using namespace std;

int main(){
    int size,i;
    int *ptr;
    cout<<"Enter size of the array : ";
    cin>>size;
    ptr = new int[size];
    for(i=0;i<size;i++){
        cout<<"Enter number : ";
        cin>>ptr[i];
    }
    for(i=0;i<size;i++){
        cout<<ptr[i]<<",";
    }
    delete[] ptr;
    }

// #include <iostream>
// using namespace std;
// class Box
// {
// private:
//     int volume;

// public:
//     Box()
//     {
//         volume = 0;
//     }
//     void setVolume(int v)
//     {
//         volume = v;
//     }
//     int getVolume()
//     {
//         return volume;
//     }
// };
// int main()
// {
//     Box *myBox = new Box();
//     myBox->setVolume(100);
//     cout << "Volume of the box: " << myBox->getVolume() << endl;
//     delete myBox;
//     return 0;
// }