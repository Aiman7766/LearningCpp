#include<iostream>
#include<cmath>
using namespace std;


int checkNumberofDigits(int number)
{
    int counter;
    while(number>0)
    {
        number=number/10;
        counter++;
    }
    return counter;
}


int checkArmno(int numbercame)
{
    int originalnum;
    originalnum=numbercame;
    int raiseTo=checkNumberofDigits(numbercame);
    int rem,sum=0;
    while(numbercame>0)
    {
        rem=numbercame%10;
        sum=sum+pow(rem,raiseTo);
        numbercame/=10;
    }
    if(sum==originalnum)
        return 1;
    else
        return 0;
}


int main()
{
    int gnum,isArmStrongnum;
    cout<<"Enter a number : ";
    cin>>gnum;
    isArmStrongnum=checkArmno(gnum);
    if(isArmStrongnum==1)
        cout<<gnum<<" is Armstrong number";
    else
        cout<<gnum<<" is not a Armstrong number";
    return 0;
}
