/*
The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'C'
*/

#include <iostream>
using namespace std;

int main(){
    char myGrade = 'B';
    cout << myGrade << "\n";

    // Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters:

    char a = 65, b = 66, c = 67;
    cout << a << "\n";
    cout << b << "\b";
    cout << c << "\n";

    return 0;

}