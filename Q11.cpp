//Write a C++ Program to print difference of two numbers.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1,num2,diff;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    diff=num1-num2;
    cout<<diff;
    return 0;
}
