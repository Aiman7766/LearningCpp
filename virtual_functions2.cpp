#include<iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start()
    {
        cout<<"Basic car started "<<endl;
    }
};

class AdvCar:public BasicCar
{
public:
    void start()
    {
        cout<<"Advance car started"<<endl;
    }
};

int main()
{
    AdvCar d;
    BasicCar *ptr;
    ptr=&d;
    ptr->start();
    return 0;
}
