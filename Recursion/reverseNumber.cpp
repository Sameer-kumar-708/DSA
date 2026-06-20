#include <iostream>
using namespace std;

int reverseNum(int num, int rem)
{

  if (num == 0)
    return rem;

  return reverseNum(num / 10, rem * 10 + num % 10);
}
int main()
{

  int num = 4321;
  int ans = reverseNum(num, 0);
  cout << ans;

  return 0;
}