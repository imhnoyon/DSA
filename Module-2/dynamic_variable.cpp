#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *p=new int;
    *p=100;
    cout<<"main:"<< *p<<endl;
    return p;
}
int main()
{
   int *a=fun();
   cout<<*a;
}