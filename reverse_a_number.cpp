#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"Enter a number : ";
    cin>>num;
    int duplicate=num;
    while(num>0)
    {
        rem=num%10;
        num/=10;
        rev=rev*10+rem;
    }
    cout<<"Reverse of "<<duplicate<<" is "<<rev;
    return 0;
}
