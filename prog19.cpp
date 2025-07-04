// Write a program to perform the deletion of white spaces such as horizontal tab, vertical tab, space, line feed, new line, and carriage return from a text file and store the contents of the file without the white spaces on another file.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    cout << "Before removal of white spaces : " << endl;
    string current_line; 
    string text;
    while (getline(in, current_line))
    {
        cout << current_line << endl;
        text += current_line + '\n';
    }
    for (char ch : text)
    {
        if (!isspace(ch))
        {
            out << ch;
        }
    }
    out.close();
    ifstream outR("output.txt");
    cout << "\nAfter removal of while spaces : " << endl;
    while (getline(outR, current_line))
    {
        cout << current_line << endl;
    }
    in.close();
    outR.close();
    return 0;
}
