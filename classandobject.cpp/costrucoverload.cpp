/*constructor overloading means same class name but passing parameter are different*/
#include<iostream>
using namespace std;

class complex
{
    private:
    float x;
    float y;
    public:
    complex()//default constructor
    {
        x=0;
        y=0;
    }
    complex(float a)//construc overload 
    {
        x=a;
        y=0;
    }
    complex(float a, float b)//construct overload 2 parameter.
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};

int main()
{
    complex obj,obj1(20.0),obj2(10.0,11.0);
    obj.show();
    obj1.show();
    obj2.show();
    return 0;
}