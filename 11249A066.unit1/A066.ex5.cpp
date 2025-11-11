#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;
    void display(){
        cout<<"Title:"<<title
        <<"Author:"<<author
        <<"price:RS."<<price<<endl;
    }
};
int main(){
    Book b1,b2;
    b1.title="c++ programming";
    b1.price=750.50;
    b1.author="Bjavne stroustrup";
    b2.title="Data structures";
    b2.author="Mark allen weiss";
    b2.price=600.75;
    b1.display();
    b2.display();
    return 0;
}
