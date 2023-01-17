#include <bits/stdc++.h>
using namespace std;

void fun(int n, char A, char B, char C)
{
  if (n == 1)
  {
    cout << A << " " << C << endl;
  }
  else
  {
    fun(n - 1, A, C, B);
    cout << A << " " << C << endl;
    fun(n - 1, B, A, C);
  }
}

int main()
{
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << endl;
  fun(n, '1', '2', '3');
}
