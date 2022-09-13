#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0,duplicate;
    cout<<"Enter a number : ";
    cin>>num;
    duplicate=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    if(rev==duplicate)
    {
        cout<<duplicate<<" is a Palindrome number.";
    }
    else
    {
        cout<<duplicate<<" is not a Palindrome number.";
    }
    return 0;
}
