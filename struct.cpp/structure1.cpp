#include<iostream>
#include<string.h>
using namespace std;
struct Books
{
    char name[20];
    char author[20];
    int Id;
};
int main()
{

    struct Books B;
    char str1[20];
    char str2[20];
    cout<<"Enter the book name:";
    cin>>str1;
    strcpy(B.name,str1);
    cout<<endl<<"Enter the Author name:";
    cin>>str2;
    strcpy(B.author,str2);
    cout<<endl<<"Enter the Book id:";
    cin>>B.Id;
    cout<<"Book name:"<<B.name<<endl;
    cout<<"Author name:"<<B.author<<endl;
    cout<<"Book id:"<<B.Id<<endl;
    return 0;

    
}