#include <iostream>
using namespace std;

int main(){

    // int
    int myNum = 1000;
    cout << myNum << "\n";

    // float
    float myNumFloat = 5.75;
    cout << myNumFloat << "\n";

    // double
    double myNumDouble = 19.99;
    cout << myNumDouble << "\n";

    /*
    The precision of a floating point value indicates how many digits the value can have after the decimal point. 
    The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
    Therefore it is safer to use double for most calculations.
    */

    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1 << "\n";

    return 0;
}