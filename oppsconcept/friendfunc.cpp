/*Creating friend function*/
#include<iostream>
#include<conio.h>
using namespace std;

class Friend
{
public:
    int number;
    void getinput()
    {
        cout<<"Enter the number:";
        cin>>number;
    }
    void add(Friend a, Friend b)
    {
        number=a.number+b.number;
    }
    void display()
    {
        cout<<"Number "<<number<<endl;
    }
};
int main()
{
    Friend A,B,C;
    A.getinput();
    B.getinput();
    C.add(A,B);

    A.display();
    B.display();
    C.display();
    return 0;
}