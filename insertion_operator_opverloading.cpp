#include<iostream>
using namespace std;
//program for insertion operator overloading
class Complex
{
private:
    int real;
    int img;
public:
    //this is a constructor
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
   /* void display()
    {
        cout<<"Output is "<<real<<"+i"<<img;
    }*/
    friend void operator<<(ostream &out,Complex &c);
};
/*
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}*/
void operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img;
    //return out;
}


int main()
{
    Complex c(6,2);
    //cout<<c<<endl;
    cout<<c;
    return 0;
}
