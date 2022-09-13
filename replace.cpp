#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Programming";
    cout<<str<<endl;
    str.replace(3,6,"H");
    cout<<str;
    return 0;
}
