#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int l = 0; l < x; l++)
    {
        int n, sum;
        cin >> n >> sum;
        int ar[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {

                    if (ar[i] + ar[j] + ar[k] == sum)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}