#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;

    student(int id, char name[101], char section, int total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};
int main()
{
    
        char name[101] = "sakib";
       // int num;
        // >> num;
        student a(1, name, 'A', 90);
        char name2[101] = "rakib";
        //int num2;
        //cin >> num2;
        student b(2, name2, 'B', 90);
        char name3[101] = "akib";

       // int num3;
       // cin >> num3;
        student c(3, name3, 'C', 90);

        if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else if (c.total_marks > b.total_marks && c.total_marks > a.total_marks)
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
        }
        else if (a.total_marks == b.total_marks )
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if (b.total_marks == c.total_marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else if(a.total_marks == c.total_marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
    

    return 0;
}