#include <iostream>
using namespace std;

int Sum(int num)
{
  if (num == 1)
  {
    return 1; // ✅ return value
  }

  return num + Sum(num - 1);
}

int main()
{
  // int n;
  // cin >> n;

  int ans = Sum(10);
  cout << ans;

  return 0;
}