/*Use of private access specifier*/
#include<iostream>
using namespace std;

class A
{
    public:
    void display_A()
    {
        cout<<"Output from clas A."<<endl;
    }
};
class B : private A//private mean this class obj doesnot directly access the base class members.
{                   // But calling base class fucntion inside the drived class function is possible.
    public:
    void display_B()
    {
        display_A();//calling base class members indirectly
        cout<<"Output from class B."<<endl;
    }
};
int main()
{
    B obj;
    obj.display_B();//obj.display_A()  generate error.//but inheritate using public u can use.
    return 0;
}