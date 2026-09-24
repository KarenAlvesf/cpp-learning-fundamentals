/*
    Rectangle perimeter — Ask for width and height and calculate the perimeter.
*/

#include <iostream>

using namespace std;

int main(){
    int width, height;

    cout << "Hi, please entry the width and height of the rectangle: \n\n";
    cin >> width >> height;

    cout << "\n The perimeter of the rectangle is " << 2 * (width + height) << ".\n\n" << endl;

    return 0;
}