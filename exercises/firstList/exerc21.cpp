/*
    Assignment operators — Start with x = 10 and use +=, -=, *=, and /=, and show the result of each operation.
*/

#include <iostream>

using namespace std;

int main(){

    int x = 10;
    x += 5;
    cout << "first operation: x += 5 = " << x << endl;

    x -= 3;
    cout << "second operation: x -= 3 = " << x << endl;

    x *= 2;
    cout << "third operation: x *= 2 = " << x << endl;

    x /= 4;
    cout << "fourth operation: x /= 4 = " << x << endl;

    return 0;

}