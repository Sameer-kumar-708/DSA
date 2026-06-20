#include <iostream>
using namespace std;

int countZeros(int num, int count)
{

  if (num == 0)
  {
    return count;
  }

  int rem = num % 10;

  if (rem == 0)
  {
    return countZeros(num / 10, count + 1);
  }
  else
  {
    return countZeros(num / 10, count);
  }
}

int main()
{

  int n = 302002;
  int ans = countZeros(n, 0);
  cout << ans;

  return 0;
}