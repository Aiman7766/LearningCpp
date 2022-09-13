#include<iostream>
using namespace std;
int addfun(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a=10,b=20,c;
    c=addfun(a,b);
    cout<<a<<"+"<<b<<"="<<c;
    return 0;
}
