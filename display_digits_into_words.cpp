#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"Enter a number : ";
    cin>>num;//548
    int copy1=num;
    while(num>0)//584>0
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;//rev=485 and rem=1 and num=0
    }
    cout<<"The digits of "<<copy1<<" in words is : ";
    while(rev>0)//rev=485>0
    {
        rem=rev%10; //rem=5
        rev=rev/10;

        switch(rem)
        {
            case 0:cout<<"Zero ";
            break;

            case 1:cout<<"One ";
            break;

            case 2:cout<<"Two ";
            break;

            case 3:cout<<"Three ";
            break;

            case 4:cout<<"Four ";
            break;

            case 5:cout<<"Five ";
            break;

            case 6:cout<<"Six ";
            break;

            case 7:cout<<"Seven ";
            break;

            case 8:cout<<"Eight ";
            break;

            default:cout<<"Nine ";
            break;
        }

    }
    return 0;
}
