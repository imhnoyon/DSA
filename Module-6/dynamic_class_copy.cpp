#include<bits/stdc++.h>
using namespace std;
 class student
 {
    public:
     string name;
     int roll;
     student (string name,int roll)
     {
        this->name=name;
        this->roll=roll;
     }
 };
int main()
{
  student *a =new student("Mahedi Hasan Noyon",24);
  student *b =new student("rakib",43);
  *a=*b;
  delete b;
  cout<<a->name<< " "<<a->roll;

  return 0;
}