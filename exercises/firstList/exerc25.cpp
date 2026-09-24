/*
    Total salary — Ask for the monthly salary and the number of months worked. Calculate the total amount received.
*/
#include <iostream>

using namespace std;   

int main (){
    double salary;
    int months;

    cout << "Hi! Please, enter your monthly salary: \n\n";
    cin >> salary; 
    cout << "Now, enter the number of months worked: \n\n";
    cin >> months;

    salary = salary * months;

    cout << "Your total amount received is " << salary << ".\n\n" << endl;

    return 0;

}