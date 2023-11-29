#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, p;
    cin >> a >> s >> b >> p >> c;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    if (s == '+' && p == '=')
    {

        if (sum == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << sum;
        }
    }
    else if (s == '-' && p == '=')
    {
        if (sub == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << sub;
        }
    }
    else if (s == '*' && p == '=')
    {

        if (mul == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << mul;
        }
    }

    return 0;
}