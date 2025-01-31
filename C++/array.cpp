#include<iostream>
using namespace std;
int main()
{
     string array0[3]={"Volvo","BMW","Lizard"};
     char array1[3]={'v','w','t'};
     for(int i=0;i<sizeof(array0)/sizeof(array0[0]);i++)
     {
         cout<<array0[i]<<endl;
         cout<<array1[i]<<endl;
     }

}
