#include<iostream>
using namespace std;
int main()
{
    //program for multiplication of two matrix
    int m1,n1;
    cout<<"Enter the no. of rows and no. of columns of First  matrix : ";
    cin>>m1>>n1;
    int m2,n2;
    cout<<"Enter the no. of rows and no. of columns of Second matrix : ";
    cin>>m2>>n2;

    int arr1[m1][n1];
    cout<<"Enter the "<<m1*n1<<" elements of first matrix : ";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr1[i][j];
        }
    }

    int arr2[m2][n2];
    cout<<"Enter the "<<m2*n2<<" elements of second matrix : ";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    cout<<"Matrix entered by you is below.\n";
    for(int i=0;i<m1;i++)
    {
        cout<<"\t";
        for(int j=0;j<n1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<m2;i++)
    {
        cout<<"\t";
        for(int j=0;j<n2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr3[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    cout<<"Sum of above two matrix is below"<<endl;
    for(int i=0;i<m2;i++)
    {
        cout<<"\t";
        for(int j=0;j<n2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
