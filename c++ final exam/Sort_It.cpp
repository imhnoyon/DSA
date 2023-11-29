#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char section;
    int roll;
    int math_marks;
    int eng_marks;
};
bool cmp(student a, student b)
{
    if ((a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks))
    {
        return true;
    }
    else if ((a.math_marks + a.eng_marks) < (b.math_marks + b.eng_marks))
    {
        return false;
    }
    else 
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].roll >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].roll << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}