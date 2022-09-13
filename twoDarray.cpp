#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the no. of rows and no. of columns of matrix. : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the "<<m*n<<" elements of array : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Your array is. \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
