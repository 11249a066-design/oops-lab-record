#include<iostream>
using namespace std;
class car{
    public:
    string model;
    string company;
    float price;
    void display(){
        cout<<"Company:"<<company
        <<"Model:"<<model
        <<"Price:Rs."<<price<<endl;
    }
};
int main(){
    car c1,c2;
    c1.company="Toyota";
    c1.model="Innova";
    c1.price=2000000;
    c2.model="city";
    c2.company="Hyundai";
    c2.price=12000000;
    c1.display();
    c2.display();
    return 0;
}