/*
    Assignment operators are used to assign values to variables

 Operator  |	 Example  |   Same As
    =	   |     x = 5	  |    x = 5	
   +=	   |	 x += 3   |    x = x + 3 	
   -=	   |     x -= 3   |    x = x - 3	
   *=	   |	 x *= 3   |    x = x * 3	
   /=	   |	 x /= 3   |    x = x / 3	
   %=	   |	 x %= 3   |    x = x % 3	
   &=	   |	 x &= 3   |    x = x & 3	
   |=	   |	 x |= 3   |    x = x | 3	
   ^=	   |     x ^= 3   |    x = x ^ 3	
   >>=	   |	 x >>= 3  |    x = x >> 3	
   <<=	   |	 x <<= 3  |    x = x << 3

*/

#include <iostream>
using namespace std;

int main() {

    int x = 10; // the assignment operator = is being used to assign the value 10 to a variable called x
    // the addition compound assignment operator += adds a value to a variable:
    int x1 = 10;
    x1 += 5; // same as x = x + 5

    // Compound assignment operators are a shorter way of writing operations where you use a variable in both sides of an assignment.
    // for example, instead of writing x + x + 5, you can simply write x += 5
    int y = 10;
    y += 5;
    cout << y << endl; // 15

    y *= 2; // same as x = x * 2
    cout << x << endl; // 30

    /*
        Compound operators make code shorter and easier to read, especially when updating the same variable many times
        Why "Compound"?
        They are called compound assignment operators because they combine a regular operators like +, -, *, etc with
        the assignment operator = into one single operator. For example, += is combination of + and =.
    */

    // Compound assignment operators can also be used in real-life scenarios. 
    // For example, you can use the += operator to keep track of savings when you add money to an account:
    int savings = 100; 
    savings += 50; // add 50 to savings

    cout << "Total savings: " << savings;





    

}
