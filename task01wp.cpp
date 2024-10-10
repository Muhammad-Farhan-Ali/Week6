#include<iostream>
using namespace std;

string canBuyDress(float dressCost,string brand);

int main()
{
    float dressCost;
    string brand;

    cout<<"Enter dress cost: $";
    cin>>dressCost;
    cout<<"Enter the dress brand:";
    cin>>brand;

    cout<<canBuyDress(dressCost,brand)<<'\n';

    return 0;
}
string canBuyDress(float dressCost,string brand)
{
    if(dressCost<1500 && brand=="MJT")
    {
        return "Congratulations! You can buy the dress!";
    }
    else
    {
        return "Sorry! The dress doesnot meet criteria for purchase!";
    }
}