#include <iostream>
using namespace std;

int floor_of_Number(int arr[], int n, int target)
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
  return start;
}

int main()
{

  int arr[] = {1, 2, 3, 3, 4, 5, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 6;

  int idx = floor_of_Number(arr, n, target);
  cout << idx;

  return 0;
}
