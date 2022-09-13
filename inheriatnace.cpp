#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    void display()
    {
        cout<<"Display of Base "<<endl;
    }
};
class Derived:public Base
{
public:
    void show()
    {
        cout<<"show of derived "<<endl;
    }
};
int main()
{
    Base b;
    b.x=525;
    Derived d;
    cout<<b.x<<endl;
    cout<<&b.x<<endl;
    cout<<d.x<<endl
;    cout<<&d.x<<endl;
    d.display();
    d.show();
}
