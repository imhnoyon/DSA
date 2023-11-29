#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    int sum=0;
    int sum2=0;
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]-'0';
        if(i<3)
        {
            sum+=x;
        }
        else
        {
            sum2+=x;
        }
    }
    if(sum==sum2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
   
  }
  return 0;
}