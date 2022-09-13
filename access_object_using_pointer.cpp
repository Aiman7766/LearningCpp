#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1;
    Rectangle *p;
    p=&r1;
    p->length=25;
    p->breadth=20;
    cout<<p->area()<<endl;
    cout<<p->perimeter();
    return 0;
}

