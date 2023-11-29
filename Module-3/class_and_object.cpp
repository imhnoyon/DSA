#include<bits/stdc++.h>
using namespace std;

class student
{
  public:
   char name[100];
   int roll;
   float cgpa;
};
int main()
{
    student Noyon;
    cout<<"Your name::";
    cin.getline(Noyon.name,100);
    cout<<"Your Roll::";
    cin>>Noyon.roll;
    cout<<"Your CGPA::";
    cin>>Noyon.cgpa;

    cout<<Noyon.name<<endl<<Noyon.roll<<endl<<Noyon.cgpa;
  
  return 0;
}