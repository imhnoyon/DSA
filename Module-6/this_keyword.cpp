#include<bits/stdc++.h>
using namespace std;

 class student
 {
    public:
      string name;
      int age;
      student (string name,int age)
      {
        this->name=name;
        this->age=age;
      }
      void fun()
      {
        cout<<"hello";
      }
 };
int main()
{
  student s("Mahedi Hasan",26);
  cout<<s.name<<" "<<s.age;
  return 0;
}