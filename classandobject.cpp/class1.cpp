#include<iostream>
using namespace std;

class Room//class name
{
public://access specifier.
int length;//propertice
int width;
int claculatearea()//methods
{
    return length*width;
}    
};
int main()
{
    Room r1;//r1 -> object.
    r1.length=10;
    r1.width=8;
    cout<<"Area of the room is "<<r1.claculatearea();

    Room r2;// r2->object.
    cout<<endl<<"Enter the 2nd romm lenth:";
    cin>>r2.length;
    cout<<endl<<"Enter the 2nd romm width:";
    cin>>r2.width;
    cout<<"Area of the 2nd room is "<<r2.claculatearea();
    return 0;
}




