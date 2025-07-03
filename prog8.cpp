// Implement a class string containing the following functions:
// a) Overload + operator to carry out the concatenation of strings.
// b) Overload = operator to carry out string copy.

#include <iostream>
#include <string.h>

using namespace std;

class AddString {
public:
    char s1[25], s2[25];

    AddString(char str1[], char str2[]) {
        strcpy(s1, str1);
        strcpy(s2, str2);
    }
    void operator+() {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
    void operator=(AddString &a) {
        strcpy(s1, a.s1);
        strcpy(s2, a.s2);
    }
};
int main() {
    char str1[] = "Hello";
    char str2[] = " World";
    AddString a1(str1, str2);
    AddString a2(str1, str2);
    +a1;
    a2 = a1;
    cout << "\nAfter copying a1 to a2:\n";
    cout << "First string in a2 : " << a2.s1 << "\n";
    cout << "Second string in a2 : " << a2.s2 << "\n";
    return 0;
}

