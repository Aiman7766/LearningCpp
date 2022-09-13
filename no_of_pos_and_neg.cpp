#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pluscount=0,minuscount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pluscount++;
        }
        else if(arr[i]<0)
        {
            minuscount++;
        }
    }
    cout<<"Number of positive number in array is "<<pluscount<<endl;
    cout<<"Number of negative number in array is "<<minuscount;
    return 0;
}
