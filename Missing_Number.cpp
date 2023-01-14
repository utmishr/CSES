#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long a[n + 1], b[n + 1] = {0};
  for (long long i = 1; i < n; i++)
  {
    cin >> a[i];
    b[a[i]] = 1;
  }
  for (long long i = 1; i < n + 1; i++)
  {
    if (b[i] == 0)
    {
      cout << i;
      break;
    }
  }
}