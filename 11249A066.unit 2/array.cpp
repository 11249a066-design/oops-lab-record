#include<iostream>
using namespace std;
class Employee
{
    int id;
    char name[20];
    public:
    void getData()
    {
        cout<<"Enter ID and NAME:";
        cin>>id>>name;
    }
    void display()
    {
    cout<<"ID:"<<id<<"NAME:"<<name<<endl;
    }
};
int main()
{
    Employee e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getData();
    }
    cout<<"\n Employee Details:\n";
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}