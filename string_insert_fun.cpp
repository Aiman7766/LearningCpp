#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";
    cout<<str<<endl;
    str.insert(3,"Apple",2);
    cout<<str;
}
