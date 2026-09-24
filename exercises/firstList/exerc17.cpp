/*
    Seconds → minutes — Ask for a number of seconds and display how many full minutes and remaining seconds there are.
*/

#include <iostream>

using namespace std;

int main(){
    int seconds;
    int minutes;

    cout << "Hi, please enter the number of seconds: \n\n";
    cin >> seconds;

    minutes = seconds / 60;

    cout << "\n the number of minutes is " << minutes << ".\n\n" << endl;

    return 0;
}