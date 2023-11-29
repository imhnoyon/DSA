#include<bits/stdc++.h>
using namespace std;
class fre
{
   public:
   char value;
   int count;
};
int main()
{
  string s;
  cin>>s;
 fre f[26];
 for(int i=0;i<26;i++)
 {
    f[i].value=char(i+'a');
    f[i].count=0;
 }
 for(char c:s)
 {
    int ascii=int(c+'a');
    f[ascii].count++;
 }
 for(int i=0;i<26;i++)
 {
    cout<<f[i].value<<" "<<f[i].count;
 }
  return 0;
}