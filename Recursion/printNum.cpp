#include <iostream>
using namespace std;

int factorial(int num)
{

  if (num == 1)
  {
    return 1;
  }

  return num * factorial(num - 1);
}

int main()
{

  int ans = factorial(5);

  cout << ans;

  return 0;
}