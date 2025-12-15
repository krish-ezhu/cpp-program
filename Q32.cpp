//Write a C++ Program to check whether three sides form a valid triangle.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Triangle validity condition
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c &&
        a + c > b &&
        b + c > a)
        cout << "The sides form a valid triangle";
    else
        cout << "The sides do not form a valid triangle";

    return 0;
}
