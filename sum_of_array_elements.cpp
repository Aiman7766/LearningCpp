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
    cout<<"Sum of all elements of array is "<<sum;
    return 0;
}
