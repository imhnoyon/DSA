#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (ar[i] != ar[j])
        {
            count++;
            break;
        }
        i++;
        j--;
    }
    if (count == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}