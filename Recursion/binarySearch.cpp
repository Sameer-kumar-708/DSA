#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
  if (start > end)
    return -1;
  int mid = start + (end - start) / 2;

  if (arr[mid] == target)
    return mid;
  else if (arr[mid] >= target)
  {
    return binarySearch(arr, target, start, mid - 1);
  }
  else
  {
    return binarySearch(arr, target, mid + 1, end);
  }

  return -1;
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int target = 9;
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = binarySearch(arr, target, 0, n - 1);
  cout << ans;
  return 0;
}