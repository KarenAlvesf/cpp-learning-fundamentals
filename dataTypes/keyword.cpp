/*
    The auto keyword automatically detects the type of a variable based on the value you assign to it. 
    It helps you write cleaner code and avoid repeating types, especially for long or complex types.
*/

#include <iostream>
using namespace std;

int main(){
    auto x = 5; // x is automatically treated as int

    // Starting in C++11, auto became a powerful way to let the compiler figure out the type based on the value you assign

    // Here's an example showing how auto can be used to create variables of different types, based on the values you assign:
    auto myNum = 5; // int
    auto myFloatNum = 5.99f; // float
    auto myLetter = 'D'; // char
    auto myString = "Hello"; // string

    /*
        Auto only works whe you assign a value at the same time ( You can't declare auto x; without assigning a value)
        Once the type is chosen, it stays the same:
    */
    auto x = 5; // x is now an int
    x = 10; // Ok - still an int
    x = 9.99; // Error - can't assign a double to an int

    return 0; 
}