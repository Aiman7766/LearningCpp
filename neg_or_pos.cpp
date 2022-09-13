#include<iostream>
using namespace std;
int main()
{
        cout<<"Enter a number : ";
        int x;
        cin>>x;
        if(x>0)
        {
            cout<<x<<" is a positive number.";
        }
        else if(x<0)
        {
            cout<<x<<" is a negative number";
        }
        else
        {
            cout<<"0 is neither positive nor negative number.";
        }
        return 0;
}
