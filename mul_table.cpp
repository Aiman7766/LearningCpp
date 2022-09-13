#include<iostream>
using namespace std;
int main()
{
    int till_table;
    cout<<"Enter a number upto which you want multiplication table : ";
    cin>>till_table;
    int start_table;
    for(start_table=1;start_table<=till_table;start_table++)
    {
        int i;
        for(i=1;i<=10;i++)
        {
            cout<<start_table<<" x "<<i<<" = "<<start_table*i<<endl;
        }
        cout<<"\n\n";
    }
    return 0;
}
