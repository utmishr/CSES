#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  long long count = 1;
  long long ma = 1;
  for (int i = 1; i < s.length(); i++)
  {
    if (s[i] == s[i - 1])
    {
      count++;
    }
    else
    {
      if (ma < count)
      {
        ma = count;
      }
      count = 1;
    }
  }
  if (ma < count)
  {
    ma = count;
  }
  cout << ma;
}