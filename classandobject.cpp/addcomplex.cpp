/*adding two complex number(5+7i=>fisrt+secondi) using class*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int first;
    int second;
public:
    void getdata(int num1,int num2)
    {
        first=num1;
        second=num2;
    }
    void showdata();
    Complex add(Complex c)
    {
        Complex temp;
        temp.first=first+c.first;//c1.first +c2.first
        temp.second=second+c.second;
        return temp;
    }
};
void Complex::showdata()
{
    cout<<"first="<<first<<endl<<"second="<<second<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.getdata(5,7);
    c2.getdata(7,5);
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}

