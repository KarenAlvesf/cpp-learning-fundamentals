/*
    BMI Calculation — Ask for weight and height and calculate the BMI using BMI = weight / (height × height).
*/

#include <iostream>

using namespace std;

int main(){
    double weight, height, bmi;

    cout << "Hi! Please, enter your weight: \n\n";
    cin >> weight;
    cout << "Now, enter your height: \n\n";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is " << bmi << ".\n\n" << endl;

    return 0;

}