#include<iostream>
using namespace std;
void Search(int arr[],int len,int key)
{
    arr[2]=5555;
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
    Search(arr,9,k);

 //   cout<<"Element at :"<<index;
}
