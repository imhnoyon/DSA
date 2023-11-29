#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int count = 0;
  stringstream ss(s);
  string word;
  while (ss >> word)
  {

    if (word >= "a" && word <= "z" || word >= "A" && word <= "Z")

    {
      // if (word != " ")
      if (word != "." || word != "!" || word != "?" || word != " " || word != ",")
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
