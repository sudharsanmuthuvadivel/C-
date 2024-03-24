/*private acces specifier in 3 classes*/
#include<iostream>
#include<string.h>
using namespace std;

class A
{
    private:
    string name;
    public:
    void setname(string iname)//originak name setting function.
    {
        name=iname;
    }
    void display_A()//diplay fucntion
    {
        cout<<name;//display.
    }
    
};
class B:private A
{
    public:
    void display_B()
    {
        display_A();//indirectly caaling display fucntion bcz class B is privatly inheritence from A
    }
    void setname_B(string iname)//string reciving
    {
        setname(iname);//calling base class setname fucntion
    }
};
class C:public B//class B all function accessible except private member.
{
    public:
    void setname_C(string iname)//string get from main() 
    {
        setname_B(iname);//calling Class B setname fucntion to passing iname to class B
    }
};

int main()
{
    C obj;
    obj.setname_B("Sudharsan");//set name use B or C because, c is public inheritence.
    
    obj.display_B();//display calling.
    return 0;
}