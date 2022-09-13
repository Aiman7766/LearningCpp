#include<iostream>
using namespace std;
void swapf(int &,int &);
int main()
{
    //pass by reference
    int a=2,b=65;
    cout<<"Numbers before swap : "<<a<<" "<<b<<endl;
    swapf(a,b);//actual parameters
    cout<<"Numbers after swap :"<<a<<" "<<b<<endl;
    cout<<"Address of a & b"<<&a<<" "<<&b;
    return 0;
}
void swapf(int &x,int &y)//formal parameters
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Address of x and y :"<<&x<<" "<<&y<<endl;
}


