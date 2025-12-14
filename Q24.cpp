//Write a C++ Program to swap two numbers without using a third variable.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;

    swap(num1,num2);   // library function

    cout <<"Number 1 : " <<num1<<endl <<"Number 2 : "<<num2;

    return 0;
}