#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
    student a;
    cin >> a.id >> a.name >> a.section >> a.total_marks;
    student b;
    cin >> b.id >> b.name >> b.section >> b.total_marks;
    student c;
    cin >> c.id >> c.name >> c.section >> c.total_marks;

   // cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
   // cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
   // cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;

      if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
      {
          cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
      }
      else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
      {
          cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
      }
      else if (c.total_marks > b.total_marks && c.total_marks > a.total_marks)
      {
          cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
      }
      else if (a.total_marks == b.total_marks )
      {
          cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
      }
      else if (b.total_marks == c.total_marks)
      {
          cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
      }
      else if(a.total_marks == c.total_marks)
      {
          cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
      }
  
    }
    return 0;
}