/*adding two numbers using function like pass by reference*/
#include<iostream>
using namespace std;
void addition (int &);
int main()
{
    int data=10;
    addition(data);//pass by reference .
    cout<<"value of add:"<<data<<endl;
    return 0;
}
void addition(int &x)//&x stores address of data variable
{
    int input;
    cout<<"Enter the input:";
    cin>>input;
    x=x+input;
}