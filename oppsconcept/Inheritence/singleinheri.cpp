/*Single inheritence using 2 classes*/
#include<iostream>
using namespace std;

class A{/////Base class
    private:
    int data;
    public:
    void setdata()
    {
        cout<<"Enter the Value:";
        cin>>data;
        cout<<endl;
    }
    void display()
    {
        cout<<"Entered value is:"<<data<<endl;
    }
};
class B:public A///Drived class B inherited to Base class A(public is access specifier).
{};
int main()
{
    B obj;///Drived class object but access the Base class methods
    obj.setdata();
    obj.display();
    return 0;
}