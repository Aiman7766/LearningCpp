#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2,D;
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D==0)
    {
        cout<<"Roots are real and equal.\n";
        r1=(-b/(2*a));
    }
    else if(D>0)
    {
        cout<<"Roots are real and unequal.\n";
        cout<<(-b+sqrt(D)/(2*a))<<endl;
        cout<<(-b-sqrt(D)/(2*a));
    }
    else
    {
        cout<<"Roots are imaginary";
    }
    return 0;
}

