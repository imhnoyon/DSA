#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int j=n;
  int i=0;
 for(int i=0;i<n-1;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            int swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
        }
    }
 }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
 return 0;
}