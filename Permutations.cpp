#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  if (n == 1)
  {
    cout << 1;
  }
  else if (n == 2 || n == 3)
  {
    cout << "NO SOLUTION";
  }
  else if (n % 2 == 0)
  {
    cout << n - 1;
    for (long long i = n - 3; i >= 1; i--)
    {
      cout << " " << i;
      i--;
    }
    for (long long i = n; i >= 2; i--)
    {
      cout << " " << i;
      i--;
    }
  }
  else
  {
    cout << n;
    for (long long i = n - 2; i >= 1; i--)
    {
      cout << " " << i;
      i--;
    }
    for (long long i = n - 1; i >= 2; i--)
    {
      cout << " " << i;
      i--;
    }
  }
}