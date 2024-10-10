#include<iostream>
using namespace std;

float totalIncome(string screen_type,int rows,int columns);

int main()
{
    string screen_type;
    int rows,columns;

    cout<<"Enter screening type (Premiere/Normal/Discount):";
    cin>>screen_type;
    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of columns:";
    cin>>columns;

    float total=totalIncome(screen_type,rows,columns);

    cout<<total<<'\n';

    return 0;
}
float totalIncome(string screen_type,int rows,int columns)
{
    int chairs=rows*columns;
    float price;
    if(screen_type=="Premiere")
    {
        price=12.00;
    }
    else if(screen_type=="Normal")
    {
        price=7.50;
    }
    else if(screen_type=="Discount")
    {
        price=5.00;
    }
    else
    {
        cout<<"Invalid input!<<'\n";
        return 0;
    }
    float total=price*chairs;
    return total;
}