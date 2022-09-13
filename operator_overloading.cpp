#include<iostream>
using namespace std;
class Complex
{
public:
    int real;
    int  img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    //Complex add(Complex x)
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};
int main()
{
    Complex C1(10,5);
    Complex C2(10,5);

    Complex C3;

    //C3=C1.add(C2);
    C3=C1+C2;
    cout<<C3.real<<"+i"<<C3.img<<endl;
    return 0;
}
