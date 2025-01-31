#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter your number " ;
    cin>>x;
    switch(x%2)
    {
    case 0:
        cout<<"even"<<endl;
        break;
    case 1:
        cout<<"odd"<<endl;
        break;
    default:
        cout<<"Invalid"<< endl;
    }
}
