/*
    Swapping values ​​— Create two variables and swap their values ​​using a third, temporary variable.
*/

#include <iostream>

using namespace std;

int main(){
    int num1, num2, temp;

    cout << "Hi, please enter two numbers: \n\n";
    cin >> num1 >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The first entry is " << num2 << " and the second emtry is " << num1 << ".\n\n" << endl;

    return 0;

}