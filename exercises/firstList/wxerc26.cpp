/*
    Purchase — Ask for the product price, the quantity purchased, and the amount paid. Calculate the purchase total and the change.
*/

#include <iostream>

using namespace std;   

int main (){
    double price, paid;
    int quantity;

    cout << "Hi! Please, enter the product price: \n\n";
    cin >> price; 
    cout << "Now, enter the quantity purchased: \n\n";
    cin >> quantity;
    cout << "Finally, enter the amount paid: \n\n";
    cin >> paid;

    price = price * quantity;
    paid = paid - price;

    cout << "The purchase total is " << price << ".\n\n";
    cout << "The change is " << paid << ".\n\n" << endl;

    return 0;

}