#include<iostream>
using namespace std;
int main()
{
    int counter=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
    return 0;
}
