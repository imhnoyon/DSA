#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
   int i=0;
   while(ss >> word)
   {
     
     reverse(word.begin(),word.end());

     if(i==1)
     {
        cout<<" ";
     }
     i=1;
     cout<<word;
     
   }

    return 0;
}