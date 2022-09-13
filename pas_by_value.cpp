#include<iostream>
using namespace std;
void swapf(int,int);
int main()
{
    int a=10,b=15;
    cout<<"Numbers before swap : "<<a<<" "<<b<<endl;
    swapf(a,b);
    cout<<"Numbers after swap :"<<a<<" "<<b;
    return 0;
}
void swapf(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
