#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="WELCOME";
    int num=0;
    for(int i=0;str[i]!='\0';i++)
    {
        num++;
    }
    cout<<"The length of string is : "<<num;
    return 0;
}

