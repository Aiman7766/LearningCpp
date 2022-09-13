#include<iostream>
using namespace std;
int main()
{
        int u,v,a;
        float speed;
        cout<<"Enter u,v,a";
        cin>>u>>v>>a;
        speed=(v*v-u*u)/(2*a);
        cout<<"speed is "<<speed;
        return 0;
}
