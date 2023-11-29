#include<bits/stdc++.h>
using namespace std;
int* fun(int n)
{
    
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     return ar;
}
int main()
{
    int n;
    cin>>n;
  int ans= fun();
  for(int i=0;i<n;i++)
  {
    cout<<ans[i];
  }
  return 0;
}