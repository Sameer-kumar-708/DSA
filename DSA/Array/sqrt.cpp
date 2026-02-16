#include <iostream>
using namespace std;

int sqrt(int n)
{

  int start = 1, end = n, ans;
  while (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (mid == n / mid)
    {
      return mid;
    }
    else if (mid < n / mid)
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}

int main()
{
  int n = 15;
  int ans = sqrt(n);
  cout << ans;
  return 0;
}