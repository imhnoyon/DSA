#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[100001];
    int cnt[26] = {0};
    while(cin.getline(s,100001))
    {
        int value = s[100001] - 'a';
        cnt[value]++;
    }
   
   int count=0;
    for (int i = 0; i < 26; i++)
    {
        char s = i + 'a';
        while (cnt[i] != 0)
        {
            cout << s;
            cnt[i]--;
            count++;
        }
        if(count==0)
    {
        cout<<endl;
    }
    }
    

    return 0;
}