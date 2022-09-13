#include<iostream>
using namespace std;
void twoSum(int arr[],int length,int tgt)
{
    int *p=new int[sizeof(int)*2];
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]+arr[j]==tgt)
            {
                p[0]=i;
                p[1]=j;
                cout<<p[0]<<" "<<p[1];
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array. : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements of array. : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter a target value : ";
    cin>>target;

    cout<<"The indexes are : ";
    twoSum(arr,n,target);

}

