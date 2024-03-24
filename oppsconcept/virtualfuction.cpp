/*Virtual function*/
#include<iostream>
using namespace std;

class Shape   // Base class
{
public:
    double height,width;
    Shape(double a, double b)
    {
        height=a;
        width=b;
    }
    virtual double area()//virtual mean dynamic or late binding will happen in coming programm
    {
        cout<<"Area from base class."<<endl;
        return 0;
    }
};
class Triangle:public Shape   //drived class inheritate to base class of the Shape
{
    public:
    Triangle(double a, double b): Shape(a,b) {}///This Triangle constructor parameteras are directly invoked to Shape contrutor in base class.
    double area()
    {
        cout<<"Area of the Triangle:";
        return (height*width)/2;
        
    }
};
class Rectangle: public Shape
{
    public:
    Rectangle(double a, double b):Shape(a,b) {}//This Rectangular constructor parameteras are directly invoked to Shape contrutor in base class.
    double area()
    {
        cout<<endl<<"Area of the Rectangular:";
        return (height*width);
        
    }
};
int main()
{
    Shape *s;
    Triangle t(10.0,20.0);
    s=&t;
    cout<<s->area();//dynamic binding or late binding ..after the execution when run button clicked then it activate

    Rectangle r(10.0,20.0);
    s=&r;      //command it then 
    cout<<s->area();//cout<<t.area() ....without using virtual this command is correct.that is called early binding. 
    return 0;
}

