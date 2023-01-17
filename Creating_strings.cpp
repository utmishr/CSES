#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  vector<string> s;
  cin >> str;
  if (str.length() == 0)
  {
    cout << "No Permutations Possible!!";
  }
  else
  {
    sort(str.begin(), str.end());
    do
    {
      s.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
      cout << s[i] << endl;
    }
  }
}