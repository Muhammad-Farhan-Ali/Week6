#include<iostream>
using namespace std;

string checkTitle(char gender,float age);

int main()
{
    float age;
    char gender;

    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your gender (m/f):";
    cin>>gender;

    cout<<"Your personal title: "<<checkTitle(gender,age)<<'\n';

    return 0;
}
string checkTitle(char gender,float age)
{
    if(gender=='m')
    {
        if(age>=16)
        {
            return "Mr.";
        }
        else
        {
            return "Master";
        }
    }
    else if(gender=='f')
    {
        if(age>=16)
        {
            return "Ms.";
        }
        else 
        {
            return "Miss";
        } 
    }
    else 
    {
        return "Invalid input!";
    }
}