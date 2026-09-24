/*
    Simple calculator — Ask for two numbers and display the sum, subtraction, multiplication, division, and remainder.
*/

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Hi! Please, enter two numbers: \n\n";
    cin >> num1 >> num2;

    cout << "The sum of the two numbers is " << num1 + num2 << ".\n\n";
    cout << "The subtraction of the two numbers is " << num1 - num2 << ".\n\n";
    cout << "The multiplication of the two numbers is " << num1 * num2 << ".\n\n";
    cout << "The division of the two numbers is " << num1 / num2 << ".\n\n";
    cout << "The remainder of the division of the two numbers is " << num1 % num2 << ".\n\n";

    return 0;
}