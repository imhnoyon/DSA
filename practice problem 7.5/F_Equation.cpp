#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,n;
  cin>>x>>n;
  long long int ans=0;
  for(int i=2;i<= n;i=i+2)
  {
   long long int res= pow(x,i);
   ans=ans+res;
     
  }
  cout<<ans;
  return 0;
}