/*Findout child pocket money(dad +mom) using inheritence*///(Multiple inheritence)
#include<iostream>
using namespace std;

class Dad
{
    protected:
    int Money_from_dad;
    public:
    void Dad_money()
    {
        cout<<"Enter Pocket Money Given by Dad:"<<endl;
        cin>>Money_from_dad;
    }
    void Dads_display()
    {
        cout<<"Pocket Money Given by Dad:"<<Money_from_dad<<endl;
    }
};
class Mom
{
    protected:
    int Money_from_mom;
    public:
    void Mom_money()
    {
        cout<<"Enter Pocket Money Given by Mom:"<<endl;
        cin>>Money_from_mom;
    }
    void Moms_display()
    {
        cout<<"Pocket Money Given by Mom:"<<Money_from_mom<<endl;
    }
};
class child:public Dad, public Mom //Multiple inheritence declaration format.
{
    private:
    int Total_money;
    public:
    void Totalmoney()
    {
        Total_money=Money_from_dad+Money_from_mom;
        cout<<"Child Total pocket money is "<<Total_money;
    }
};

int main()
{
    child obj;
    obj.Dad_money();
    obj.Mom_money();

    obj.Dads_display();
    obj.Moms_display();
    obj.Totalmoney();
    return 0;
}
