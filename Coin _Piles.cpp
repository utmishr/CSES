#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    double x, y;
    cin >> x >> y;
    double v = ((2 * y) - x) / 3;
    double t = ((2 * x) - y) / 3;
    if (x == y && x == 0)
    {
      cout << "YES" << endl;
    }
    else if (ceil(v) == floor(v) && v >= 0 && v <= min(x, y) && ceil(t) == floor(t) && t >= 0 && t <= min(x, y))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}