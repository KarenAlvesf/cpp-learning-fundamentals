/*
    Celsius → Fahrenheit — Ask for a temperature in Celsius and convert it to Fahrenheit using F = (C × 9 / 5) + 32.
*/

#include <iostream>

using namespace std;

int main(){
    double celsius;
    double fahrenheit;

    cout << "hi, please enter the temperature in Celsius: \n\n";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "\n the temperature in Fahrenheit is " << fahrenheit << ".\n\n" << endl;

    return 0;
}