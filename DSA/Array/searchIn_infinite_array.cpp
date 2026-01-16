#include <iostream>
using namespace std;

int search_in_infinite_array(int arr[], int start, int end, int target)
{
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

int infinite_array(int arr[], int target)
{

  int start = 0;
  int end = 1;

  while (arr[end] < target)
  {
    start = end;
    end = end * 2;
  }
  return search_in_infinite_array(arr, start, end, target);
}

int main()
{

  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
  int target = 14;
  // int n = sizeof(arr) / sizeof(arr[0]);

  int idx = infinite_array(arr, target);
  cout << idx;

  return 0;
}
