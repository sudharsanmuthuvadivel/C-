/*creating default constructor and parameterized constructor*/
#include<iostream>
using namespace std;

class demo
{
    private:
    int data;
    public:
    demo(int a);//parameterized constructor declerarion.
    demo()//default constructor.
    {
        data=50;
    }
    void show()
    {
        cout<<data<<endl;
    }
};
demo::demo(int a)//parameterized constructor defenition.
{
    data = a;
}
int main()
{
    demo obj,obj1(60);//obj for default,obj1 for parameterized constructor.
    obj.show();
    obj1.show();
}