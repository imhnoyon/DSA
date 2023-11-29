#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    student(string name, int age, int marks1,int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1= marks1;
        this->marks2=marks2;

    }
    void fun()
    {
        cout << name << " " << age << " " << marks1<<" "<<marks2 <<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    student s("Mahedi hasan",20,90,90);
    s.fun();
  cout<<s.total_marks();
    return 0;
}