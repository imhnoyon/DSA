#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[100001];
    int cnt[26] = {0};
    while (cin.getline(s, 100001))
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            int value = s[i] - 'a';
            cnt[value]++;
        }

        for (int i = 0; i < 26; i++)
        {
            
            if (cnt[i] != 0)
            {
                for(int j=0;j<cnt[i];j++)
                {
                    char c=i+'a';
                    cout<<c;
                }
            }
            cnt[i]=0;
        }
        
        cout << endl;
    }

    return 0;
}
