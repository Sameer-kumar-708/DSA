#include <iostream>
using namespace std;

int ArraySum(int *arr, int n, int idx)
{

  if (arr[idx] == n)
  {
    return n;
  }

  int sum = arr[idx] + ArraySum(arr, n, idx + 1);

  return sum;
}
int main()
{

  int arr[] = {1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = ArraySum(arr, n, 0);
  cout << ans;

  return 0;
}