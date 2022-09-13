#include<iostream>
using namespace std;
int maximum(int x,int y,int z)
{
    if(x>y && x>>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers.\n";
    cin>>a>>b>>c;
    int (*fp)(int,int,int);
    fp=maximum;
    cout<<"Maximum number is "<<(*fp)(a,b,c);
    return 0;
}
