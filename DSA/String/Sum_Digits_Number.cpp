#include <iostream>
using namespace std;

int sum_digits(int n)
{

  int sum = 0;

  while (n != 0)
  {

    int rem = n % 10;
    sum = sum + rem;
    n = n / 10;
  }

  return sum;
}

int main()
{

  int num = 102;
  int ans = sum_digits(num);
  cout << ans;

  return 0;
}