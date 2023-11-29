#include<bits/stdc++.h>
using namespace std;
int * fun()
{
   
   int *p= new int [5];
   for(int i=0;i<5;i++)
   {
     cin>>p[i];
   }
   return p;
}
int main()
{
    int *p=fun();
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}