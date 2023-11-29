#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    char section;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].marks;
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i].section, a[j].section);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].section << " " << a[i].marks << endl;
    }
    return 0;
}