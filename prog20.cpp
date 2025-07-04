// Write a program to raise an exception if any attempt is made to refer to an element whose index is beyond the array size.

#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int index;
    cout << "Enter an index to access the array (0-4): ";
    cin >> index;
    try
    {
        if (index < 0 || index >= size)
        {
            throw runtime_error("Index out of range");
        }
        cout << "Element at index " << index << ": " << arr[index] << endl;
    }
    catch (runtime_error &x)
    {
        cout << "Exception: " << x.what() << endl;
    }
    return 0;
}