/*switch case
switch(variable)
{
    case 1:
     statement;
     break;
     .
     .
     default:
      statement like invalid;
      break;
}*/
#include<iostream>
 using namespace std;
 int main()
 {
    int choice;
    cout<<"Enter your choice from 1 to 3:"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"You have entered choice 1."<<endl;
        break;
    case 2:
        cout<<"You have entered choice 2."<<endl;
        break;
    case 3:
        cout<<"You have entered choice 3."<<endl;
        break;
    default:
        cout<<"invalid choice."<<endl;
        break;
    }
    return 0;
 }