/* 
    4) Basic variables — Create variables to store your name, age, height, and weight, and print them all.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    /* variables being used in this code */
    string nome = "Karen"; 
    string cidade = "Manaus"; 
    int idade = 25;
    double altura = 1.53;
    float peso = 49.5;

    cout << "Hi, my name is " << nome << ", I'm " << idade << " years old, my height is " << altura 
    << " and my weight is " << peso << ". I live in " << cidade << endl; /* this is being printed */

    return 0;
}