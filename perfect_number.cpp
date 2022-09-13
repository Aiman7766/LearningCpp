#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            //cout<<i<<" is a factor of "<<n<<endl;
            sum+=i;
        }
    }
    if(n*2==sum)
    {
        cout<<n<<" is a perfect number."<<endl;
    }
    else
    {
        cout<<n<<" is not a perfect number."<<endl;
    }
    return 0;
}
