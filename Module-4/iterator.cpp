#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   // string::iterator it;
    cin >> s;
    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;

    for ( auto it = s.begin(); it <= s.end() - 1; it++)
        
    {
        cout << *(it) << endl;
    }

    return 0;
}
