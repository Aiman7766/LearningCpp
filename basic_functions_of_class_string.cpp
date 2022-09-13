#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";
    if(str.empty())
    {
        cout<<"string is empty";
    }
    else
        cout<<"String is not empty and string is "<<str;

    return 0;
}
