#include<iostream>
using namespace std;
int main()
{
    int rnum,num;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0)
    {
        rnum=num%10;
        cout<<rnum;
        num/=10;
        //num=num/10;
    }
    return 0;
}
