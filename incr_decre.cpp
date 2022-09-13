#include<iostream>
using namespace std;
int main()
{
  /*  int i=4;
    //i=i+1;
 //  i+=1;
    ++i;*/
    //lets see pre and post
    int i=5,j;
    j=2* ++i + 2* i++;
    cout<<i<<endl<<j;
    return 0;
}
