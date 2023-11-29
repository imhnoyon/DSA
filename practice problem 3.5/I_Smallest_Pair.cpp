#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int ar[x];
        for (int i = 0; i < x; i++)
        {
            cin >> ar[i];
        }
        long long int mn = INT_MAX;
        long long int value;
        for (int i = 0; i < x - 1; i++)
        {
            for (int j = i + 1; j < x; j++)
            {

                value = ((ar[i] + ar[j]) + (j - i));
                mn = min(mn, value);
            }
        }
        cout << mn << endl;
    }

    return 0;
}