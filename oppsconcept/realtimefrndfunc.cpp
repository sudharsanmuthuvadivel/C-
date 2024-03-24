/*creating frnd function for show  total salary of boss and employee.*/
#include<iostream>
using namespace std;

class employee;//class decleration
class boss
{
    private:
    int salary;
    public:
    boss(){}
    boss(int a)
    {
        salary=a;
    }
    void display_boss()
    {
        cout<<"Boss salary is "<<salary<<endl;
    }
    friend void Total_salary(boss,employee);//friend function decleration
};
class employee
{
    private:
    int salary;
    public:
    employee(){}
    employee(int b)
    {
        salary=b;
    }
    void display_employee()
    {
        cout<<"Employee salary is "<<salary<<endl;
    }
    friend void Total_salary(boss,employee);//friend function decleration
};
void Total_salary(boss b,employee e)//friend function
{
    int Total;
    Total= b.salary+e.salary;
    cout<<"Total salary is "<<Total<<endl;
}

int main()
{
    boss obj1(50000);
    employee obj2(40000);
    obj1.display_boss();
    obj2.display_employee();
    Total_salary(obj1,obj2);
    return 0;
}
