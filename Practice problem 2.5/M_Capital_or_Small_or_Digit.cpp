#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>='A' && x<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(x>='0'&& x<='9')
    {
        cout<<"IS DIGIT";
    }
    else if(x>='a'&& x<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}