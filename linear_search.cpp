#include<iostream>
using namespace std;
int main()  //Linear Search code
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter a key to search inside array : ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<key<<" is found in array.";
            return 0;
        }
    }
    cout<<key<<" is not found in array.";
    return 0;
}
