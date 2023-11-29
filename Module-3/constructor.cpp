#include<bits/stdc++.h>
using namespace std;

class student
{
  public:
   int roll;
   int cls;
   float cgpa;
   student (int roll,int cls,float cgpa)
   {
     this-> roll=roll;
     this-> cls=cls;
     this-> cgpa=cgpa;
   }
};
int main()
{
    student Noyon(30,10,3.55);
    cout<<"Roll:"<<Noyon.roll<<endl <<"Class:"<<Noyon.cls <<endl<<"CGPA:"<<Noyon.cgpa;
  
  return 0;
}