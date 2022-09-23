#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter numbers:"<<endl;
    cin>>n>>m;
    n=m+n;
    m=n-m;
    n=n-m;
    cout<<"n="<<n<<" m="<<m<<endl;
    return 0;
}