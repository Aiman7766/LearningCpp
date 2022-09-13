#include<iostream>
using namespace std;
int main()
{
        float bamt;
        cout<<"Enter your bill amount is : ";
        cin>>bamt;

        cout<<"Your Initial Bill Amount is "<<bamt<<endl;
        if(bamt<100)
            cout<<"No discount applicable";
        else if(bamt>=100 && bamt<500)
        {
            bamt=bamt-(0.1*bamt);
            cout<<"10% discount ia applied\n";
            cout<<"Bill after discount is : "<<bamt;
        }
        else if(bamt>=500)
        {
            bamt=bamt-(0.2*bamt);
            cout<<"20% discount ia applied\n";
            cout<<"Bill after discount is : "<<bamt;
        }
        return 0;
}
