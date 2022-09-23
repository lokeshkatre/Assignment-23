#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter numbers:"<<endl;
    cin>>n>>m;
    if(n>m)
    cout<<n<<" is maximum"<<endl;
    else if(n<m)
    cout<<m<<" is maximum"<<endl;
    else
    cout<<"Both are equal"<<endl;
    return 0;
}