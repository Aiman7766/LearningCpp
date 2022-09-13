#include<iostream>
using namespace std;
int letscheck(arr[])
{
    cout<<"\narray belongs to letscheck function: ";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Your array is : ";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    letscheck(arr);
    //return 0;
}
