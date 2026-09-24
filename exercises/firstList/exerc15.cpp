/*
    Average — Ask for three numbers and calculate their average.
*/

#include <iostream>

using namespace std;

int main(){
    double num1, num2, num3;
    double average;

    cout << "Hi, please enter three numbers: \n\n";
    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "\n The average of the numbers is " << average << ".\n\n" << endl;
    return 0;
}