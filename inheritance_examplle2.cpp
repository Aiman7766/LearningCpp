#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
   Rectangle();
   Rectangle(int l,int b);
   Rectangle(Rectangle &r);
   void setLength(int l);
   void setBreadth(int b);
   int getLength(){return length;}
   int getBreadth(){return breadth;}
   int area();
   int perimeter();
   bool isSquare();
   ~Rectangle();
};
Rectangle::Rectangle()
{
    int length=1;
    int breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
        if(l>=0)
        {
            length=l;
        }
        else
        {
            cout<<"Length cannot be negative"<<endl;
            length=0;
        }
}
void Rectangle::setBreadth(int b)
{
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            cout<<"Breadth cannot be negative"<<endl;
            breadth=0;
        }
}
/*
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}*/
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        height=h;
    }
    int getHeight(){return height;}
    void setHeight(int h){height=h;}
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    Cuboid c(5);
    cout<<"Volume is "<<c.volume()<<endl;
    return 0;
}

