/*using static variable in class*/
#include<iostream>
using namespace std;
class demo
{
    private:
    static int counter;//counter =0 bcz of static variable
    public:
    void increment()
    {
        counter++;
    }
    static void show()// if static variable used inside the class ,it will accessed by only static function.
    {
        cout<<"\ncounter value:"<<counter;
    }
}; 
int demo::counter;//must if static variable used inside the class this declartion must
                   //data type ..class name :: variable
int main()
{
    demo obj1;
    obj1.increment();
    obj1.increment();
    obj1.show();
    return 0;
}