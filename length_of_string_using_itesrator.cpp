#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="WELCOME";
    string::iterator it;
    int num=0;
    for(it=str.begin();it!=str.end();it++)
    {
        num++;
    }
    cout<<"The length of string is : "<<num;
    return 0;
}

