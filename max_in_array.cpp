#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements of array is "<<sum<<endl;
    int maxe=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxe)
        {
            maxe=arr[i];
        }
    }
    cout<<"Largest number in array is "<<maxe<<endl;
    int mini=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout<<"Smallest number in array is "<<mini;
    return 0;
}
