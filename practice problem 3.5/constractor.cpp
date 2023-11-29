#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[100];
    int roll;
    int math_marks;
    int cls;
  //  student(char name[100], int roll, int math_marks, int cls)
   // {
   //     strcpy(this->name, name);
   //     this->roll = roll;
   //     this->math_marks = math_marks;
   //     this->cls = cls;
   // }
};
int main()
{
    int mx = INT_MIN;
   /* char a[100] = "mahedi";
    char b[100] = "Noyon";
    char c[100] = "rakib";
    student mahedi(a, 10, 80, 10);
    student Noyon(b, 20, 90, 10);
    student mahedi(c, 30, 75, 10);
    */
   student a;
   a.roll=21;
   a.cls=10;
   a.math_marks=95;
   char tmp[100]="Noyon";
   strcpy(a.name,tmp);
   cout<<a.name<<end<<a.cls<<endl<<a.math_marks<<endl<<a.roll<<endl;


   // mx = max({mahedi.math_marks,Noyon.math_marks,mahedi.math_marks});
    cout<<mx;


    return 0;
}