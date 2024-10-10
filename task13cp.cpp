#include<iostream>
using namespace std;

float lowestPrice(int kilometers,string time);

int main()
{
    int kilometers;
    string time;

    cout<<"Enter number of kilometers:";
    cin>>kilometers;
    cout<<"Enter periode of day (day/night):";
    cin>>time;

    float total=lowestPrice(kilometers,time);

    cout<<"Lowest price for "<<kilometers<<" kilometers: "<<total<<" EUR!"<<'\n';

    return 0;
}
float lowestPrice(int kilometers,string time)
{
    if(kilometers<20)
    {
        if(time=="day")                //taxi price in day is 0.79
        {
            return (kilometers*0.79)+0.70;
        }
        else if(time=="night")        //taxi price at night is 0.90
        {
            return (kilometers*0.90)+0.70;    
        }
    }
    else if(kilometers<100 && kilometers>=20)    //bus is atleat 20km for 0.09 per km
    {
        return 0.09*kilometers;
    }
    else if(kilometers>=100)                     //train is atleast 100km for 0.06 per km
    {
        return 0.06*kilometers;
    }
}