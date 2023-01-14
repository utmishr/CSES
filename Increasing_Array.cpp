#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long a[n];
  long long dif;
  long long count = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i >= 1)
    {
      dif = a[i] - a[i - 1];
      if (dif < 0)
      {
        a[i] = a[i] + abs(dif);
        count = count + abs(dif);
      }
    }
  }
  cout << count;
}