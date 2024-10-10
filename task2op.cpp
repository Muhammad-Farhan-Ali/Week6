#include<iostream>
using namespace std;

bool parityAnalysis(int num);

int main()
{
    int number;

    cout<<"Enter a three-digit number:";
    cin>>number;

    if(number>999 || number<100)
    {
        cout<<"Not in range!"<<'\n';
        return 0;
    }

    cout<<parityAnalysis(number)<<'\n';

    return 0;
}
bool parityAnalysis(int num)
{
    int unit,tens,hundreds,parity;

    unit=num%10;
    tens=(num/10)%10;
    hundreds=(num/100)%10;

    parity=unit+tens+hundreds;

    if((num%2==0 && parity%2==0) || (num%2==1 && parity%2==1))
    {
        return true;
    }
    else
    {
        return false;
    }
}