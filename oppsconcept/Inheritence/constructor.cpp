/*constructor in inheritence*/
#include<iostream>
using namespace std;

class A
{
    protected:
    int data_A;
    public:
    A()//default constructor.
    {
        cout<<"Hello from class A."<<endl;
    }
    A(int a)//paramerized constructor it will called when value assigned in main function.
    {
        data_A=a;
    }
};
class B:public A
{
    private:
    int data_B;
    public:
    B()//default constructor
    {
        cout<<"Hello from class B."<<endl;
    }
    B(int b,int c):A(c)//way to assign data to class A from B (: called scope resolution)
    {
        data_B=b;
    }
    void dispaly()
    {
        cout<<"data_A = "<<data_A<<endl;//posible to call data A when classA variable in potected or public
        cout<<"data_B = "<<data_B<<endl;
    }
};
 int main()
 {
    B obj(500,200);
    obj.dispaly();
    return 0;
 }