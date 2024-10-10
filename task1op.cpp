#include<iostream>
using namespace std;

bool greaterNumber(int num1,int num2);

int main()
{
    int n1,n2;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter first number:";
    cin>>n2;

    cout<<greaterNumber(n1,n2);

    return 0;
}
bool greaterNumber(int num1,int num2)
{
    if(num1>num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}