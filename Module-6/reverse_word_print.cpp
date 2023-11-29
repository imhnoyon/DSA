#include<bits/stdc++.h>
using namespace std;
void fun(stringstream & word)
{
    string ss;
   if(word>>ss)
   {
      fun(word);
      cout<<ss<<endl;

   }
}

int main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  fun(ss);
  

  return 0;
}