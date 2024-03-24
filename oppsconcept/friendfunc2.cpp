/*getting different shapes length and finding which one length is high using friend fucntion
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Triangle;
class Rectangle;
class Square
{
    private:
    int length;
    public:
    Square (int x)
    {
        length=x;
    }
    friend void checklength(Square,Triangle,Rectangle);
};
class Rectangle
{
    private:
    int length;
    public:
    Rectangle (int x)
    {
        length=x;
    }
    friend void checklength(Square,Triangle,Rectangle);
};
class Triangle
{
    private:
    int length;
    public:
    Triangle (int x)
    {
        length=x;
    }
    friend void checklength(Square,Triangle,Rectangle);
};
void checklength(Square x, Triangle y,Rectangle z)
{
    if (x.length>y.length && x.length>z.length)
    cout<<"Squre length is high."<<endl;
    else if (y.length>x.length && y.length>z.length)
    {
        cout<<"Triangle length is high."<<endl;
    }
    else
    cout<<"Rectangle length is high."<<endl; 
}
int main()
{
    Square s(30);
    Triangle t(5);
    Rectangle r(20);
    
    checklength(s,t,r);
    return 0;
}