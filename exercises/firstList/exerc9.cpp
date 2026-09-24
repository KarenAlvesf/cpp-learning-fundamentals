/*  
    9) Mathematical operations — Ask for two numbers and show the sum, subtraction, multiplication, and division.
*/  

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Hi! Please, enter two numbers: \n\n";
    cin >> num1 >> num2;

    cout << "\n the sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n\n" << endl;
    cout << "\n the subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n\n" << endl;
    cout << "\n the multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n\n" << endl;
    cout << "\n the division of " << num1 << " and " << num2 << " is " << num1 / num2 << ".\n\n" << endl;

    return 0;

}    