#include<iostream>
using namespace std;

class Base
{
public:
    void display()
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
    //derived d;
    //d.display();
    derived b;
    b.Base::display();


    return 0;
}
