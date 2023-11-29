#include<bits/stdc++.h>
using namespace std;

 class student
 {
    public:
    int roll;
    int cls;
    float gpa;

    student (int roll,int cls,float gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;

    }

 };
 student* fun()
 {
    student *noyon= new student(40,5,3.55);
    return noyon;
 }

int main()
{
  student *ans=fun();
  cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa;
  delete ans;
  return 0;
}