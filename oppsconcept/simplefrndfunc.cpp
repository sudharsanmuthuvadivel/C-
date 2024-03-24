#include<iostream>
using namespace std;

class Simple
{
    private:
    int num1,num2;
    friend void multiply(Simple);//friend function declaration it will wrk even public.
    public:
    Simple()//default constructor
    {
    }
    Simple(int a,int b)//parameterized constructor.
    {
        num1=a;
        num2=b;
    }
    void display();
    //friend void multiply(Simple);//Friend func declaration ..it will wrk even in private.
};
void Simple::display()//regular func defenition
{
    cout<<"Data1 = "<<num1<<endl<<"Data2 = "<<num2<<endl;
}
void multiply(Simple s)//Friend func defenition.
{
    int data0;
    data0=s.num1*s.num2;
    cout<<"Answere of multiplication:"<<data0<<endl;
}

int main()
{
    Simple s(100,200);
    s.display();
    multiply(s);
    return 0;
}