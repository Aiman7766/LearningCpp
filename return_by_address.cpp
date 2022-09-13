#include<iostream>
using namespace std;
int * functionn(int sizee)
{
    int *p=new int[sizee];
    for(int i=0;i<sizee;i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main()
{
    int *ptr=functionn(5);
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}
