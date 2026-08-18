#include <iostream>
using namespace std;

bool primeNum(int num)
{

  if (num < 2)
  {
    return false;
  }

  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
    return true;
  }
}

int main()
{

  int n = 169;
  bool ans = primeNum(n);
  cout << ans;

  return 0;
}