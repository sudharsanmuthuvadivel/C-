/*Function overriding means...same function name base class as well as dirived class.*/
#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"Hello from base class."<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"Hello from dirived class."<<endl;
    }
};

int main()
{
    B obj;
    obj.display();//same name but obj is object of class B. so class B display compiled.
    obj.A::display();//using scope resolution to call class A diplay function.
    return 0;
}