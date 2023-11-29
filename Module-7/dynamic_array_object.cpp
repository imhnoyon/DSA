#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int marks;

};
int main()
{
  int n;
  cin>>n;
 // student a[n];
  student *a= new student [n];
  for(int i=0;i<n;i++)
  {
    cin.ignore();
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    

  }
  student  mx ;  
  int result=INT_MIN;
  for(int i=0;i<n;i++)
  {
     if(a[i].marks > result)
     {
        mx=a[i];
        result=a[i].marks;
     }
  }
  cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

  return 0;
}