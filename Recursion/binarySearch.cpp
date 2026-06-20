#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{

  if (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      return binarySearch(arr, start, mid - 1, target);
    }
    else
    {
      return binarySearch(arr, mid + 1, end, target);
    }
  }

  return -1;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = binarySearch(arr, 0, n - 1, 10);
  cout << ans;

  return 0;
}