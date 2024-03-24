/*adding two numbers using function like pass by value*/
#include<iostream>
using namespace std;
int addition (int);
int main()
{
    int add=10;
    add=addition(add);//pass by value like 10.
    cout<<"value of add:"<<add<<endl;
    return 0;
}
int addition(int x)
{
    int input;
    cout<<"Enter the input:";
    cin>>input;
    return (x+input);
}