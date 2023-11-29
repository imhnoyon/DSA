#include<bits/stdc++.h>
using namespace std;

class student
{
  public:
   int roll;
   int cls;
   float cgpa;
   student (int r,int c,float gpa)
   {
      roll=r;
      cls=c;
      cgpa=gpa;
   }
};
int main()
{
    student Noyon(30,10,3.55);
    cout<<Noyon.roll<<endl <<Noyon.cls <<endl<<Noyon.cgpa;
  
  return 0;
}