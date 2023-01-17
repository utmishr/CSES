#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  ll n;
  cin >> n;
  vector<ll> a, b;
  if ((n * (n + 1) / 2) % 2 != 0)
  {
    cout << "NO";
  }
  else
  {
    if (n % 2 == 0)
    {
      for (ll i = 1; i <= n / 2; i++)
      {
        if (i % 2 != 0)
        {
          a.push_back(i);
          a.push_back(n + 1 - i);
        }
        else
        {
          b.push_back(i);
          b.push_back(n + 1 - i);
        }
      }
    }
    else
    {
      for (ll i = 1; i <= n / 2; i++)
      {
        if (i % 2 != 0)
        {
          a.push_back(i);
          a.push_back(n - i);
        }
        else
        {
          b.push_back(i);
          b.push_back(n - i);
        }
      }
      b.push_back(n);
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    cout << a.size() << endl;
    cout << a[0];
    for (ll x = 1; x < a.size(); x++)
    {
      cout << " " << a[x];
    }
    cout << endl;
    cout << b.size() << endl;
    cout << b[0];
    for (ll x = 1; x < b.size(); x++)
    {
      cout << " " << b[x];
    }
  }
}