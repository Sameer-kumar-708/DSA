#include <iostream>
using namespace std;

int Reverse_Integer(int num, int n)
{

  int ans = 0;

  while (num != 0)
  {

    int rem = num % 10;
    ans = ans * 10 + rem;
    num = num / 10;
  }

  return ans;
}

int main()
{

  int n = 123;
  int ans = Reverse_Integer(n, 3);
  cout << ans;

  return 0;
}