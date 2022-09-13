#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two number : ";
    cin>>m>>n;
    int a=m,b=n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<m;
    return 0;
}
