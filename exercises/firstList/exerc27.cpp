/*
   Splitting the bill — Ask for the bill amount and the number of people. Calculate how much each person should pay. 
*/

#include <iostream>

using namespace std;   

int main (){
    double bill;
    int people;

    cout << "Hi! Please, enter the bill amount: \n\n";
    cin >> bill;    
    cout << "Now, enter the number of people: \n\n";
    cin >> people;

    bill = bill / people;

    cout << "Each person should pay " << bill << ".\n\n" << endl;

    return 0;

}