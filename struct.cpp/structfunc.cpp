/*passing structure to function*/
#include<iostream>
#include<string.h>
using namespace std;

struct Books
{
    char Name[20];
    char Author[20];
    int id;
};
void printbook(struct Books);
int main()
{
    struct Books book ;
    strcpy(book.Name,"Thirukural.");
    strcpy(book.Author,"Thiruvalluvar.");
    book.id=1330;
    printbook(book);
    return 0;
}
void printbook(struct Books book)
{
    cout<<book.Name<<endl;
    cout<<book.Author<<endl;
    cout<<book.id<<endl;
}

