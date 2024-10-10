#include<iostream>
using namespace std;

float perimeter(char shape,float side);

int main()
{
    char shape;
    float side;

    cout<<"Enter the shape (t for triangle,c for circle,s for square,h for hexagon):";
    cin>>shape;
    cout<<"Enter value of side or radius:";
    cin>>side;

    float result=perimeter(shape,side);

    cout<<"The perimeter is: "<<result<<'\n';

    return 0;
}
float perimeter(char shape,float side)
{
    if(shape=='s')
    {
        return side*4;
    }
    else if(shape=='t')
    {
        return side*3;
    }
    else if(shape=='h')
    {
        return side*6;
    }
    else if(shape=='c')
    {
        return side*2*3.14;
    }
    else
    {
        cout<<"Invlaid input!";
        return 0;
    }
}