#include<iostream>

using namespace std;
int main()
{
    int add,sub,mul,remain;
    float num1,num2,div;
    cout<<"Please enter the 2 numbers:"<<endl;
    cin>>num1>>num2;
    add=num1+num2;
    cout<<"Sum of two numbers is           :"<<add<<endl;
    sub=num1-num2;
    cout<<"Subraction of two numbers is    :"<<sub<<endl;
    mul=num1*num2;
    cout<<"Multiplication of two numbers is:"<<mul<<endl;
    div=num1/num2;
    cout<<"Division of two numbers is      :"<<div<<endl;
    remain=int(num1)%int(num2);
    cout<<"Remainder from two numbers is   :"<<remain<<endl;
    return 0;
}