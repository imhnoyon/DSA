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
     this->cgpa=cgpa;
   }
};
student fun()
{
     student Noyon(30,10,3.55); 
     return Noyon;

}
int main()
{
   student ans=fun();
    cout<<"Roll:"<<ans.roll<<endl <<"Class:"<<ans.cls <<endl<<"CGPA:"<<ans.cgpa;
  
  return 0;
}