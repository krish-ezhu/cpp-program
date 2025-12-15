//Write a C++ Program to check in which quadrant a point (x, y) lies.

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "The point lies in First Quadrant";
    else if (x < 0 && y > 0)
        cout << "The point lies in Second Quadrant";
    else if (x < 0 && y < 0)
        cout << "The point lies in Third Quadrant";
    else if (x > 0 && y < 0)
        cout << "The point lies in Fourth Quadrant";
    else if (x == 0 && y == 0)
        cout << "The point lies at the Origin";
    else if (x == 0)
        cout << "The point lies on Y-axis";
    else if (y == 0)
        cout << "The point lies on X-axis";

    return 0;
}
