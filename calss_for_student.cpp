#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int phymarks;
    int chemarks;
    int mathmarks;

public:
    Student(int r,string nam,int p,int c,int m)
    {
        roll=r;
        name=nam;
        phymarks=p;
        chemarks=c;
        mathmarks=m;
    }
    int total()
    {
        return phymarks+chemarks+mathmarks;
    }
    char grade()
    {
        float avg=total()/3;
        if(avg>60)
        {
            return 'A';
        }
        else if (avg>=40 && avg<60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main()
{
    int roll,p,c,m;
    string name;
    cout<<"Enter the roll number of Student : ";
    cin>>roll;cout<<endl;
    cout<<"Enter your name in on word: ";
    cin>>name;cout<<endl;
    cout<<"Enter marks of physics : ";
    cin>>p;cout<<endl;
    cout<<"Enter marks of chemistry : ";
    cin>>c;cout<<endl;
    cout<<"Enter marks of mathematics : ";
    cin>>m;cout<<endl;
    Student s1(roll,name,p,c,m);

    cout<<"Total marks of the student is : "<<s1.total()<<endl;
    cout<<"The grade is : "<<s1.grade()<<endl;
    return 0;
}
