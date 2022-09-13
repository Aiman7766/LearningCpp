#include<iostream>
using namespace std;
class check
{
public:
    int x;
    int y;
};
int main()
{
    check d1,d2;
    d1.x=10;
    cout<<d1.x<<endl;
    cout<<&d1.x<<endl;
    cout<<&d1.y<<endl;
    cout<<&d1<<endl;

    cout<<d2.x<<endl;
    cout<<&d2.x<<endl;
    cout<<&d2.y<<endl;
    cout<<&d2<<endl;
    return 0;
}
