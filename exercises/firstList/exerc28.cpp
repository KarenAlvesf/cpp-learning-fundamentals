/*
    Age conversion — Ask for an age in years and convert it to months, weeks, and days. Use the values: 1 year = 12 months, 52 weeks, and 365 days.
*/

#include <iostream>

using namespace std;

int main(){
    int age, months, weeks, days;
    cout << "Hi! Please, enter your age in years: \n\n";
    cin >> age;

    months = age * 12;
    weeks = age * 52;
    days = age * 365;

    cout << "Your age in months is " << months << ".\n\n";
    cout << "Your age in weeks is " << weeks << ".\n\n";
    cout << "Your age in days is " << days << ".\n\n" << endl;


    return 0;

}