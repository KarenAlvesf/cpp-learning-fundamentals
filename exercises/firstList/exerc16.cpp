/*
    Hours → minutes — Ask for a number of hours and convert it to minutes.
*/

#include <iostream>

using namespace std;
int main(){
    int hours; 
    int minutes;

    cout << "Hi, please enter the number of hours: \n\n";
    cin >> hours;

    minutes = hours * 60;

    cout << "\n the number of minutes is " << minutes << ".\n\n" << endl;
    return 0;
}