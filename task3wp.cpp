#include<iostream>
using namespace std;

char grade(int marks);

int main()
{
    int marks;

    cout<<"Enter your marks:";
    cin>>marks;

    char result=grade(marks);
    cout<<"Grade: "<<result<<'\n';
    
    return 0;
}
char grade(int marks)
{
    if(marks>85)
    {
        return 'A';
    }
    else if(marks>80 && marks<=85)
    {
        return 'B';
    }
    else if(marks>70 && marks<=80)
    {
        return 'C';
    }
    else if(marks>60 && marks<=70)
    {
        return 'D';
    }
    else if(marks>50 && marks<=60)
    {
        return 'E';
    }
    else if(marks<50)
    {
        return 'F';
    }
}