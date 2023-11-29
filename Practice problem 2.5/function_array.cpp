#include<bits/stdc++.h>
using namespace std;
int * get_array(int x)
{
    int * ar= new int[x];
    for(int i=0;i<x;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main()
{
  int n;
  cin>>n;
 int *f= get_array(n);
  for(int i=0;i<n;i++)
  {
    cout<<f[i]<<" ";
  }

  return 0;
}