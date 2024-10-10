#include<iostream>
#include<string>
using namespace std;

string PassOrFail(int marks);

int main()
{
    int score;

    cout<<"Enter your marks:";
    cin>>score;

    cout<<PassOrFail(score);

    return 0;
}
string PassOrFail(int marks)
{
    if(marks>50)
    {
        return "You are passed with "+to_string(marks)+" marks!";
    }
    if(marks<=50)
    {
        return "You failed with "+to_string(marks)+" marks!";
    }
}