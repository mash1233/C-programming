#include<iostream>
using namespace std;
int main()
{
    int array0[10]={2,3,4,5,6,7,8,9,10,11};
    int array1[10]={2,3,4,5,6,7,8,9,10,11};
    int arraysum[10];
    cout<<"Array sum: "<<endl;
    for (int i=0;i<10;i++)
    {
        arraysum[i]=array0[i]+array1[i];
        cout<<arraysum[i]<<endl;
    }
}
