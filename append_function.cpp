#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello";
    cout<<str.capacity()<<endl;
    str.append(" World its my world now o kljhdfkhjkhfdjkhd k okk ok o");
    cout<<str<<endl;cout<<str.length();
    cout<<str.capacity()<<endl;

    return 0;
}
