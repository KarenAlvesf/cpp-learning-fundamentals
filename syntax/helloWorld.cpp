#include <iostream>
using namespace std;

int main(){
    cout << "Hello World! \n";
    cout << "I'm learning C++ \n";

    // You can also use another << operator and replace the \n character after the text, like this:
    cout << "I'm learning C++" << "\n";

    // Two \n characters after each other will create a blank line
    cout << "Hello World!" << "\n\n";

   // Another way to insert a new line, is with the endl manipulator: 
    cout << "Hello World!" << endl;
 
    /*
        \t	Creates a horizontal tab
        \\	Inserts a backslash character (\)
        \"	Inserts a double quote character
    */


    // Also used to print numbers:
    cout << 3;

    //You can also perform mathematical calculations:
    cout << 3+3;
    cout << 2*5;
    return 0;
}