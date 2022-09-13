#include<iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"area of rectangle";
    }
};

class Cuboid:public Rectangle
{
public:
    void voulme()
    {
        cout<<"volume of cuboid";
    }
};

int main()
{
    Cuboid c;
    Rectangle *ptr;
    ptr=&c;
    ptr->area();

//    ptr->volume();
}
