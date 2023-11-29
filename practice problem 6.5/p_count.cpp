#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int cnt=0;
  for(int i=0;i<s.size();i++)
  {
     if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z')
     {
        if(s[i + 1] == ' ' || s[i + 1] == '!' || s[i + 1] == '?' || s[i + 1] == '.' || s[i + 1] == ',')
        {
            cnt++;
        }
        else if(i==s.size()-1)
        {
            cnt++;
        }
     }
  }
  cout<<cnt<<endl;
  return 0;
}