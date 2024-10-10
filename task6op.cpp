#include<iostream>
using namespace std;

float discount(string day,string month,float price);

int main()
{
    float price,total;
    string day,month;

    cout<<"Enter purchase day:";
    cin>>day;
    cout<<"Enter purchase month:";
    cin>>month;
    cout<<"Enter purchase amount: $";
    cin>>price;

    total=discount(day,month,price);

    cout<<"Payable amount after discount: $"<<total<<'\n';

    return 0;
}
float discount(string day,string month,float price)
{
    float disc=0;

    if(day=="Sunday" || month=="October")
    {
        disc=10.0; 
    }
    return price-(price*(disc/100.0));
}