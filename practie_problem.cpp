#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="how Many wOrds";
    int vowel=0,cons=0,words=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117)
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            words++;
        }
        else
        {
            cons++;
        }
    }
    cout<<"The number of Vowels is : "<<vowel<<endl<<"The number of Consonants is : "<<cons<<endl<<"The number of words is : "<<words+1;
    return 0;
}
