#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=5;
    j=2* i++ + 2* i++;
    //j=2* ++i;
    cout<<"i = "<<i<<", j = "<<j;
    return 0;
}
