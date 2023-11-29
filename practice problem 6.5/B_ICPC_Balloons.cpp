#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    int freq[26] = {0};
    string s;
    cin >> s;
    int cnt = 0;
    for (char i : s)
    {
      freq[i-'A']++;
      
    }
    for(int i=0;i<26;i++)
    {
      if(freq[i]!=0)
      {
        cnt+=freq[i]+1;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}