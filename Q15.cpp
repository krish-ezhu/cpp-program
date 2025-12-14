//Write a C++ Program to swap two numbers using a third variable.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<" Number 1 : "<<num1<<endl<<" Number 2 : "<<num2;
    return 0;
}
