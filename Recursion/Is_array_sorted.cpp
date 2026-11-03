#include <iostream>
using namespace std;

int liner_search(int arr[], int i, int n, int target)
{

  if (arr[i] == target)
  {
    return i;
  }

  return liner_search(arr, i + 1, n, target);
}

int main()
{

  int arr[] = {1, 2, 3, 4, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = liner_search(arr, 0, n, 7);
  cout << ans;

  return 0;
}