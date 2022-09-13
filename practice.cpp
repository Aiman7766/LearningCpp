#include<iostream>
using namespace std;
int main()
{
    int siize;
    cout<<"Enter the size for array";
    cin>>siize;
    int arr[siize];
    cout<<siize<<endl;
    cout<<sizeof arr<<endl;
    siize=50;
    cout<<siize<<endl;
    arr[siize];
    cout<<sizeof arr;
    return 0;

}

