/*
    Fahrenheit → Celsius — Ask for a temperature in Fahrenheit and convert it to Celsius.
*/

#include <iostream>

using namespace std;

int main(){
    double fahrenheit;
    double celsius;

    cout << "Hi, please enter the temperature in fahrenheit: \n\n";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32);

    cout << "\n the temperature in celsius is " << celsius << ".\n\n" << endl;

    return 0;

}