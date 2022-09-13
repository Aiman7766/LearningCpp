#include<iostream>
using namespace std;
enum day{mon=1,tue,wed=23,thu,fri,sat,sun};
int main()
{
    day d;
    d=mon;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    return 0;
}
