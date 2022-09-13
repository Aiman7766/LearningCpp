#include<iostream>
using namespace std;
int Search(int arr[],int len,int key)
{
    arr[2]=555;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"The array we have :";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"Enter key to be search:";
    cin>>k;
    int index=Search(arr,9,k);
    cout<<"Element at :"<<index;
    cout<<"The array we  againhave :";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}
