/*

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

Syntax:
type variableName = value;

*/


#include <iostream>
using namespace std;

int main(){
    int myNum = 15;
    cout << myNum;

    int myNum; 
    myNum = 15;
    cout << myNum;

   // Note that if you assign a new value to an existing variable, it will overwrite the previous value:
   int myNum = 15;
   myNum = 20;
   cout << myNum;

   // A demonstration of other data types:
   double myFloatNum = 5.99;
   char myLetter = 'D';
   string myText = "Hello";
   bool myBoolean = true;

   cout << myFloatNum << "\n";
   cout << myLetter << "\n";
   cout << myText << "\n";
   cout << myBoolean << "\n";

   // The cout object is used together with the << operator to display variables.
   // To combine both text and a variable, separate them with the << operator:
    int myAge = 35;
    cout << "I am " << myAge << " years old. \n\n";

    // You can also combine different types
    string name = "Taylor";
    int age = 22;
    cout << "My name is " << name << " and I am " << age << " years old\n\n";

    // To add a variable to another variable
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << "\n\n";

    // To declare more than one variable of the same type, use a comma-separated list:
    int x = 5, y = 6, z = 50;
    cout << x + y+ z << "\n\n";

    // You can also assign the same value to multiple variables in one line:
    int x, y, z;
    x = y = z = 60;
    cout << x + y + z << "\n\n";

    /* ---- Constants ---- */
    // When you do not want others (or yourself) to chance existin variable values, use the const keyboard (this will declare the variable as "constant")
    const int myNum = 15; // This will always be 15
    myNum = 10; // error: assignment of read-only variable "myNum"

    // You should always declare the variable as constant when you have values that are unlikely to change:
    const int minutesPerHour = 60;

    // When you declare a constant variable, it must be assigned with a value
   // const int minutesPerHour;
    // minutesPerHour = 60; ERROR

   return 0;
}
