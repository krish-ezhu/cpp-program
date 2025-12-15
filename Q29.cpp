//Write a C++ Program to check whether a triangle is right-angled or not.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check for valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        // Check right-angled condition (Pythagoras theorem)
        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b))
            cout << "The triangle is Right-angled";
        else
            cout << "The triangle is Not right-angled";

    } else {
        cout << "Not a valid triangle";
    }

    return 0;
}
