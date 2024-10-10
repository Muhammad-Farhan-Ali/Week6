#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

string calculateCost(double budget,int people,string ticket);

int main()
{
    double budget;
    int people;
    string ticket;

    cout<<"Enter the budget:";
    cin>>budget;
    cout<<"Enter the type of ticket (VIP/Normal):";
    cin>>ticket;
    cout<<"number of people in group:";
    cin>>people;

    string summary=calculateCost(budget,people,ticket);

    cout<<summary<<endl;

    return 0;
}
string calculateCost(double budget,int people,string ticket)
{
    double transport;
    double ticket_price;

    if(people>=1 && people<=4)
    {
        transport=75;
    }
    else if(people>=5 && people<=9)
    {
        transport=60;
    }
    else if(people>=10 && people<=24)
    {
        transport=50;
    }
    else if(people>=25 && people<=49)
    {
        transport=40;
    }
    else if(people>=50)
    {
        transport=25;
    }

    if(ticket=="VIP")
    {
        ticket_price=499.99;
    }
    else if(ticket=="Normal")
    {
        ticket_price=249.99;
    }

    double transport_amount=((budget)*transport/100.0);
    double ticket_total=ticket_price*people;
    double total_expenses=ticket_total+transport_amount;

    if(total_expenses<=budget)
    {
        return "Yes! You have " +to_string(budget-total_expenses)+ " leva left!";
    }
    else
    {
        return "Not enough money! You need " +to_string(total_expenses-budget)+" leva!";
    }
}