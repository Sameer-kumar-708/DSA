#include <iostream>
using namespace std;

int sumNumber(int num)
{

  if (num == 0)
  {
    return 0;
  }
  int sum = num % 10 * sumNumber(num / 10);
  return sum;
}

int main()
{
  int n = 123;
  int ans = sumNumber(n);
  cout << ans;

  return 0;
}