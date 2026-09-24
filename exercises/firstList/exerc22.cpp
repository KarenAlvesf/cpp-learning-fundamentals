/*
    Find the result — Without running the code, determine the result of the following code and then check it:
    int x = 10;


    x += 5;
    x *= 2;
    x -= 4;
    x /= 2;
*/
// ------- Answer: -----------
/*
    x = 10
    x += 5 = 15
    x *= 2 = 30
    x -= 4 = 26
    x /= 2 = 13 (v)
*/

#include <iostream>

using namespace std;

int main(){

    int x = 10;
    x += 5;
    x *= 2;
    x -= 4;
    x /= 2;
    
    cout << x << endl;

    return 0;

}