#include<iostream>
using namespace std;
int main()
{   //using getline
        string name;
        cout<<"Enter your name\n";
        //cin>>name;
        getline(cin,name);
        cout<<"your name is "<<name;
        return 0;
}
