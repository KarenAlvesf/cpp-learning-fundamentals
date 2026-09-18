#include <iostream>
using namespace std;

int main(){
    int x; 
    cout << "type a number: ";
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x << "\n\n";
    

    // The user must input two numbers, Then we print the sum by calculating (adding) the two numbers:
    int z, y;
    int sum; 
    cout << " Type a number: ";
    cin >> z;
    cout << "Type another number: ";
    cin >> y;
    sum = + z + y;
    cout << "Sum is: " << sum << "\n";

    return 0;
}