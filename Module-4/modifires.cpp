#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a="Mahedi";
  string b="Hasan";
  a+=b; //a=a+b;
  cout<<a<<endl;
  cout<<b<<endl;
  a.push_back('s');// last a ekta character add kora
  cout<<a<<endl;
  a.pop_back();// last character delete kore ei function
  cout<<a<<endl;

  string s="mahedi_hasan_Noyon";// ekta chara delete korte chaile ei function use korte hoy
  s.erase(6,1);
  cout<<s<<endl;
  s.erase(11,1);
  cout<<s<<endl;
  
// prothome je character replace korbo oita start point and je koyta delete korbo oi number dibo then jeita replace korbo oita character dibo.
   string j="Noyon";
   j.replace(2,1,"s");
   cout<<j<<endl;

 

  return 0;
}