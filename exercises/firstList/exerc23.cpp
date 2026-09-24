/*
    Integer vs. decimal — Perform one division using `int` and another using `double`.
*/

#include <iostream>

using namespace std;

int main(){
    int num1 = 10;
    double num2 = 3.5;

    cout << "Integer division: 10/2 = " << num1 / 2 << endl;
    cout << "Double division: 3.5/2 = " << num2 / 2 << endl;

    return 0;
}