#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char s;
        cin>>s;
        int value = s- 'a';
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] != 0)
        {
            char c = i + 'a';
            cout << c;
            cnt[i] --;
        }
    }

    return 0;
}