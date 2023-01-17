#include <iostream>
using namespace std;

using ll = long long;

int main()
{
  ll n, m = 1;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    m = (m * 2) % 1000000007;
  }
  cout << m;
}