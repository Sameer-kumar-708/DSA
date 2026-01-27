#include <iostream>
using namespace std;

int search_in_rotated_sorted_array(int arr[], int n, int target)

{
  int start = 0, end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      return mid;
    }
    if (arr[start] <= arr[mid])
    { // search at left half

      if (arr[start] <= target <= arr[mid])
      { // checking target exist in left half
        end = mid - 1;
      }
      else 
      {
        start = mid + 1;
      }
    }
    else
    { // search in right lalf
      if (arr[mid] <= target <= arr[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{

  int arr[] = {4, 5, 6, 0, 1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 0;

  int idx = search_in_rotated_sorted_array(arr, n, target);
  cout << idx;

  return 0;
}