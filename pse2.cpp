#include<iostream>
using namespace std;
int main()
{
    float basic_salary;
    float per_allowances;
    float per_deduction;
    cout<<"Enter Basic Salary : ";
    cin>>basic_salary;
    cout<<"Enter Percentage of Allowances : ";
    cin>>per_allowances;
    cout<<"Enter Percentage of deductions : ";
    cin>>per_deduction;
    float netsalary;
    netsalary=basic_salary+basic_salary*(per_allowances/100)-basic_salary*(per_deduction/100);
    cout<<"\nYour net salary is : "<<netsalary;
    return 0;
}
