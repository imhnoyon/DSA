#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  stringstream b(s);
  string word;
  int cnt=0;
  while(b >> word)
  {
    cnt++;
    //cout<<word<<endl;
  }
  cout<<cnt<<endl;
  return 0;
}