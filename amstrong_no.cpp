#include<iostream>
using namespace  std;
int main()
{
    int n,m,r,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    {
        cout<<m<<" is a Armstrong number.";
    }
    else
    {
        cout<<m<<" is not a Armstrong number.";
    }
    return 0;
}
