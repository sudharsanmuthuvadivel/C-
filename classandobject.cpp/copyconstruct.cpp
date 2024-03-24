/*copy constructor...obj are copied.*/
#include<iostream>
using namespace std;

class example
{
    private:
    int data;
    public:
    example()//default constructor
    {

    }
    example(int a)//parameterized constructor.
    {
        data=a;
    }
    void show()
    {
        cout<<"data ="<<data<<endl;
    }
    example(example &dummy)///manually created copy constructor.
    {
        data=dummy.data;//when use this constructor , the parametrized constructor not working ..complier directly come this line.
        cout<<"copy constructor work successfully."<<endl;
    }
};
int main()
{
    example obj(50); 
    example obj1(obj);//copy construct...other way..>example obj1=obj; or example obj1;
    obj.show();//                                                         obj1=obj;
    obj1.show();
    return 0;

}