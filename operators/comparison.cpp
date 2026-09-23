/*
 Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions

 the return value of a comparison is either 1  or 0, which means true or false. 
*/

/*

    ==  |	    Equal to	            |    x == y	
    !=	|       Not equal	            |    x != y	
    >	|       Greater than	        |    x > y	
    <	|       Less than	            |    x < y	
    >=	|       Greater than or equal to|	 x >= y	
    <=	|       Less than or equal to	|    x <= y



*/

#include <iostream>
using namespace std;

int main() {

    // in the following example, we use the greater than operator 
    int x = 5; 
    int y = 3;
    cout << (x > y) << endl; // 1 because 5 is greater than 3

    // Comparison operators are often used in real-world conditions, such as checking if a person is old enough to vote

    int age = 18;
    cout << (age >= 18) << "\n";
    cout << (age < 18) << "\n";

    // Another common use is checking if a password is long enough:
    int passwordLength = 8;
    cout << (passwordLength >= 8) << "\n";
    cout << (passwordLength < 8) << "\n";


    return 0;
}