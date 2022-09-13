#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="WeLcOmE5";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            continue;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            continue;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
}
