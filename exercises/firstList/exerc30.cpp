/*
    Final challenge — Purchase system — Create a program that asks for the product name, price, quantity, and amount paid. 
    Calculate the purchase total and the change, and display everything in an organized manner.
*/

#include <iostream>

using namespace std;

int main(){
    string productName;
    double price, paid, purchaseTotal, change;
    int quantity;

    cout << "Hi! Please, enter the product name: \n\n";
    cin >> productName;
    cout << "Now, enter the product price: \n\n";
    cin >> price;
    cout << "Finally, enter the quantity purchased: \n\n";
    cin >> quantity;

    purchaseTotal = price * quantity;

    cout << "The product name is " << productName << ".\n\n";
    cout << "The product price is " << price << ".\n\n";
    cout << "The quantity purchased is " << quantity << ".\n\n";
    cout << "The purchase total is " << purchaseTotal << ".\n\n";

    cout << "Please, enter the amount paid: \n\n";
    cin >> paid;

    change = paid - purchaseTotal;

    cout << "The change is " << change << ".\n\n" << endl;

    return 0;

}