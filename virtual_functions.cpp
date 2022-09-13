#include<iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout<<"display of Base";
    }
};

class derived:public Base
{
public:
    void display()
    {
        cout<<"display of derived";
    }
};
int main()
{
    derived d;
    Base *ptr;
    ptr=&d;
    ptr->display();
    return 0;
}
