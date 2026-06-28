#include <iostream>
using namespace std;

int linerSearch(int arr[], int idx, int n, int target)
{

  if (arr[idx] >= n)
  {
    return -1;
  }

  if (arr[idx] == target)
  {
    return idx;
  }
  return linerSearch(arr, idx + 1, n, target);
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 2;
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = linerSearch(arr, 0, n, target);
  cout << ans;

  return 0;
}