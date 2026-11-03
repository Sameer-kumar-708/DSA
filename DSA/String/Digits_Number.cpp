#include <iostream>
using namespace std;

int digit_number(int n)
{

  int count = 0;

  while (n != 0)
  {

    int rem = n % 10;
    count++;
    n = n / 10;
  }

  return count;
}

int main()
{

  int num = 15627;
  int ans = digit_number(num);
  cout << ans;

  return 0;
}