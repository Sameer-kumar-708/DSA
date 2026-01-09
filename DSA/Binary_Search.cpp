#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{

  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      end = mid - 1;
    }
    else if (arr[mid] < target)
    {
      start = mid + 1;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 9;

  int idx = binarySearch(arr, n, target);
  cout << idx;

  return 0;
}
