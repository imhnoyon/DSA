#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name;
    int roll;
    int math_marks;
    int cls;
    student(char name,int roll,int math_marks,int cls)
    {
        this->name=name;
        this->roll=roll;
        this->math_marks=math_marks;
        this->cls=cls;
    }
};
int main()
{
   student student[3];
    for(int i=0;i<3;i++)
    {
        cin>>student[i].name;
        cin>>student[i].roll;
        cin>>student[i].math_marks;
        cin>>student[i].cls;

    }
for(int i=0;i<3;i++)
{
   cout<<student[i].name<<endl<<student[i].roll<<endl<<student[i].math_marks<<endl<<student[i].cls<<endl;
}
   
   
   
  return 0;
}