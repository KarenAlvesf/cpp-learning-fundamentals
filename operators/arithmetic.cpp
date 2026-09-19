/*
    Arithmetic operators are used to perform common mathematical operations.

    | Operator |           Name        |              Description               | Example |
    |    +     |   Addition            | Adds together two values               | Z + y   | 
    |    -     |   Substraction        | Subtracts one value from another       | X - Y   |
    |    *     |   Multiplication      | Multiplies two values                  | X * y   |
    |    /     |   Division            | Divides one value by another           | X / y   |
    |    %     |   Modulus             | Returns the division remainder         | X % y   |
    |    ++    |   Increment           | Increases the value of a variable by 1 | ++y     |
    |    --    |   Decrement           | Decreases the value of a variable by 1 | --x     |


*/
 #include <iostream>
using namespace std;

int main() {

    int x = 10;
    int y = 3;

    cout << (x+y) << endl;
    cout << (x-y) << endl;
    cout << (x*y) << endl;
    cout << (x/y) << endl;
    cout << (x%y) << endl;
    cout << (++x) << endl;
    cout << (--x) << endl;

    int z = 5;
    ++z;
    cout << z << endl;
    --z;
    cout << z << endl;

    /*
     Note: When dividing two integers in C++, the result will also be an integer. 
     For example, 10 / 3 gives 3. 
     If you want a decimal result, use float or double values, like 10.0 / 3.
    */

    int a = 10;
    int b = 3;
    cout << (a/b) << endl; // Integer division, result is 3

    double ad = 10.0;
    double bd = 3.0;
    cout << (ad/bd) << endl; // Decimal division, result is 3.333...

    /*
        Incrementing and decrementing are very common in programming, specially when working with counters, loops, and arrays
    */

    int x1 = 5;
    ++x1;
    cout << x1 << endl;

    int x2 = 5;
    x2--;
    cout << x2 << endl;

    /*
        Sometimes, you might both decrement and increment the same variable. 
        Remember that if you increase a value and later decrease it, it will go
        up by one and then back down by one - ending up where it started:
    */
    int x3 = 9;
    ++x3;
    --x3;
    cout << x3 << endl;

    /* Example:*/
    int peopleInRoom = 0;
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;
    cout << peopleInRoom << endl;
    // 1 person leaves  
    peopleInRoom--;

    cout << peopleInRoom << endl;

    return 0;
}
