#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter your numbers: ";
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<x<<"is greater"<<endl;
    }
    else if(y>x&& y>z)
    {
        cout<<y<<"is greater"<<endl;
    }
    else
        cout<<z<<"is greater ";
}
