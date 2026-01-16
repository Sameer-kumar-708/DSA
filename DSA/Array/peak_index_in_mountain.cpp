#include <iostream>
using namespace std;

int binarySearch(int arr[], int n)
{

  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
      return mid;
    }
    else if (arr[mid] > arr[mid - 1])
    {
      start = mid + 1;
    }
    else if (arr[mid] > arr[mid + 1])
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {1, 3, 5, 7, 8, 6, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  // int target = 9;

  int idx = binarySearch(arr, n);
  cout << idx;

  return 0;
}
