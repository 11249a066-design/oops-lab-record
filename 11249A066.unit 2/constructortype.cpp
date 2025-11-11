#include <iostream>
using namespace std;
class Demo
{
    int x;
public:
    Demo()
    {
        x = 0;
        cout << "Default constructor called, x=" << x << endl;
    }

    Demo(int val)
    {
        x = val;
        cout << "Parameterized constructor called, x=" << x << endl;
    }

    Demo(const Demo &d)
    {
        x = d.x;
        cout << "Copy constructor called, x=" << x << endl;
    }

    ~Demo()
    {
        cout << "Destructor called for object with x=" << x << endl;
    }
};

int main()
{
    Demo d1;        // Default constructor
    Demo d2(10);    // Parameterized constructor
    Demo d3(d2);    // Copy constructor
    return 0;
}
