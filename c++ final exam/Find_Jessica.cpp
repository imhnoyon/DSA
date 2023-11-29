#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}