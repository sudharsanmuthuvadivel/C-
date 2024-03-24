/*Using 4 classes but one is common class another 3 are inherited with common class*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Common
{
    private:
    string Name;
    string Gender;
    int Age;
    public:
    void Getinfo()
    {
        cout<<"Enter Your Name:"<<endl;
        cin>>Name;
        cout<<"Enter Your Gender:"<<endl;
        cin>>Gender;
        cout<<"Enter Your age:"<<endl;
        cin>>Age;
    }
    void Display()
    {
        cout<<endl<<"Datails Display"<<endl;
        cout<<"Name       :"<<Name<<endl;
        cout<<"Gender     :"<<Gender<<endl;
        cout<<"Age        :"<<Age<<endl;
    }
};
class Principal:public Common
{
    int Princi_salary;
    public:
    void get_princi()
    {
        cout<<"Enter Principal salary:"<<endl;
        cin>>Princi_salary;
    }
    void show_princi()
    {
        cout<<"Pricipal salary:"<<Princi_salary<<endl;
    }
};
class Teacher:public Common
{
    int Teacher_salary;
    public:
    void get_teacher()
    {
        cout<<"Enter Teacher salary:"<<endl;
        cin>>Teacher_salary;
    }
    void show_Teacher()
    {
        cout<<"Teacher salary:"<<Teacher_salary<<endl;
    }
};
class Student:public Common
{
    int Grade;
    public:
    void get_student()
    {
        cout<<"Enter Student Grade:"<<endl;
        cin>>Grade;
    }
    void show_student()
    {
        cout<<"Student Grade:"<<Grade<<endl;
    }
};

int main()
{
    Principal obj;
    obj.Getinfo();
    obj.get_princi();

    obj.Display();
    obj.show_princi();
    return 0;
    //similar to teacher and Student
}