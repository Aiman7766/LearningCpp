#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="john123@gmail.com";
    int index=(int)str.find('@');
    cout<<"The index of @ is : "<<index<<endl;
    cout<<"The username of this gmail is : "<<str.substr(0,index);
    return 0;
}
