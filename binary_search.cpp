#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter a number to search in array : ";
    cin>>key;

    int l=0,h=n-1,mid;


    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            cout<<key<<" is located at index "<<mid;
            return 0;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<key<<" is not found in array.";
    return 0;
}
