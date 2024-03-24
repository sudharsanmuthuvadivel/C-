/*store student name and mark using class*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    string name;
    int mark;
public:
    void getdata();
    void display();
};
void Student::getdata()
{
    cout<<"Enter the Name:"<<endl;
    cin>>name;
    cout<<"Enter the mark:"<<endl;
    cin>>mark;
}
void Student::display()
{
    cout<<"Name of the Student is "<<name<<endl;
    cout<<"Mark of the student is "<<mark<<endl;
}

int main()
{
    Student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.display();
    s2.display();
    return 0;
}
