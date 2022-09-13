#include<iostream>
using namespace std;
int & fun(int &x)
{
    return x;
}
int main()
{
    int a=10;
    cout<<a<<endl;
    fun(a)=25;
    //  a
    cout<<a<<endl;
    return 0;
}
