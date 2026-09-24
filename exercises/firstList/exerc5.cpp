/* 
5) Data types — Create int, double, char, bool, and string variables, assign values ​​to them, and print the values.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int dayData = 23;
    double temperature = 38.7;
    char dayLetter = 'Q';
    bool goodDay = true;

    cout << "Today is September " << dayData << "th, the temperature is " << temperature << ". The first day letter is " << dayLetter <<
    " \n Is it a good day? " << goodDay << "." << endl;

    return 0;
}
    