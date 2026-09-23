/*
    When a calculation contains more than one operator, C++ follows order of operations rules to decide which part to calculate first.
*/

#include <iostream>
using namespace std;

int main() {

    int result1 = 2 + 3 * 4; // 2 + 12 = 14
    int result2 = (2 + 3) * 4; // 5 * 4 = 20

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
    
}