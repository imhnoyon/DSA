#include <iostream>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int c = a + b;
    long long int d = a * b;
    long long int e = a - b;
    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;
    cout << a << " - " << b << " = " << e << endl;
}