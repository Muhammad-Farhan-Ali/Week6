#include<iostream>
using namespace std;

int findGreatest(int num1,int num2,int num3);

int main()
{
    int num1,num2,num3;

    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Enter third number:";
    cin>>num3;

    cout<<"The greatest among "<<num1<<", "<<num2<<" and "<<num3<<" is: "<<findGreatest(num1,num2,num3)<<'\n';

    return 0;
}
int findGreatest(int num1,int num2,int num3)
{
    if(num1>num2 && num1>num3)
    {
        return num1;
    }
    else if(num2>num1 && num2>num3)
    {
        return num2;
    }
    else if(num3>num2 && num3>num1)
    {
        return num3;
    }
    else
    {
        cout<<"Enter different numbers!"<<'\n';
        return 0;
    }
}