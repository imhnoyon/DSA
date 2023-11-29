#include<bits/stdc++.h>
using namespace std;
 namespace noyon
{
   int age=20;
   void fun()
   {
    cout<<"Hello fun"<<endl;
   }
}
namespace rakib
{
   int age2=30;
   void fun2()
   {
    cout<<"Hello fun"<<endl;
   }
}
using namespace noyon;
using namespace rakib;
int main()
{
 // cout<<noyon::age<<endl;
 // cout<<rakib::age2<<endl;
 cout<<age<<endl;
 fun();
 cout<<age2<<endl;
 fun2();
  return 0;
}