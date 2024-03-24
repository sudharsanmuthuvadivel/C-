/*claculate total tax from sum of income tax and car tax.
and inclome tax(10%) was calculated by using man income*/
#include<iostream>
#include<string.h>
using namespace std;

class Man
{
    protected:
    int income;
    public:
    void getincome(int a)
    { 
        income=a;
    }
};
class Income_tax:public Man
{
    protected:
    int incometax;
    public:
    void calculate_Tax()
    { 
        incometax=(0.1*income);
    }
};
class car_Tax
{
    protected:
    int cartax;
    public:
    void getCar_Tax(int b)
    { cartax=b; }
};
class Total_tax:public Income_tax, public car_Tax//multi inheritence.
{   
    private:
    int Total;
    public:
    void Totaltax()
    {
        Total= incometax + cartax;
        cout<<"\n"<<"Income "<<income<<endl;
        cout <<"IcomeTax "<<incometax<<endl;
        cout <<"carTax "<<cartax<<endl;
        cout<<"Total Tax "<<Total<<endl;
    }
};

int main()
{
    Total_tax obj;
    obj.getincome(50000);
    obj.calculate_Tax();
    obj.getCar_Tax(1000);
    obj.Totaltax();
    return 0;
}