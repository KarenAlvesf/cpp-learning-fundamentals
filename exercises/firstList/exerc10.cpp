/*   
    10) Division remainder — Ask for two integers and display the remainder of the division between them.
*/ 

#include <iostream>

using namespace std;   
int main (){
    int num1, num2;

    cout << "Hi! Please, enter two numbers: \n\n";
    cin >> num1 >> num2;

    cout << "\n the remainder of the division of " << num1 << " and " << num2 << " is " << num1 % num2 << ".\n\n" << endl;
    
    return 0;
}