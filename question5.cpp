#include<iostream>
using namespace std;
int main()
{
    float l,b,h,volume;
    cout<<"Enter length of cuboid:";
    cin>>l;
    cout<<"Enter breadth of cuboid:";
    cin>>b;
    cout<<"Enter height of cuboid:";
    cin>>h;
    volume = l*b*h;
    cout<<"Volume of cuboid is "<<volume<<endl;
    return 0;
}