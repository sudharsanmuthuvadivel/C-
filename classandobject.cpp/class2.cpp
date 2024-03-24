/*creat private and public acces specifier in class */
#include<iostream>
using namespace std;

class Room
{
 private://len and breath properties are only acces inside the class.but it wll accessed througth fuction only.
    int length;
    int breath;
 public://below the function and method accessed from out of class.
 int setlengthbreath(int l, int b)//using funtion to set thr value of length and breath.
 {
    length=l;
    breath=b;
 }
 int getlength()//in between the program if you want to see what the value stored in length (after setting value of length). 
 {
    return length;
 }
 int getbreath()//similar
 {
    return breath;
 }

 int getarea()
 {
    return length*breath;
 }
};
int main()
{
    Room r1;
    r1.setlengthbreath(10,15);
    cout<<"Area of room1 is "<<r1.getarea()<<endl;
    cout<<"Length of room 1 "<<r1.getlength()<<endl;
    cout<<"Breath of room 1 "<<r1.getbreath()<<endl;
    return 0;

}