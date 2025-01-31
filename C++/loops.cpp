#include<iostream>
using namespace std;
int main()
{
    cout<<"using for loop"<<endl;
    for(int i=0;i<10;i++)
    {
        if(i==4)
        {
            continue;
        }
        cout<<i<<endl;
    }
    int i=0;
    cout<<"using while loop"<<endl;
    while(i<10)
    {
        cout<<i<<endl;
        i++;
        if(i==7)
        {
            break;
        }
    }
}
