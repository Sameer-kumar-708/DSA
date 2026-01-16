#include <iostream>
using namespace std;

int minimum_element_rotated_sorted_array(int arr[], int n)
{

  int start = 0, end = n - 1;

  while (start < end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] > arr[end])
      start = mid + 1;
    else
      end = mid;
  }
  return arr[start];
}
// int minimum_element(int arr[], int n)
// {

//   int target = arr[0];

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] < target)
//     {
//       target = arr[i];
//     }
//   }
//   return minimum_element_rotated_sorted_array(arr, n, target);
// }

int main()
{

  int arr[] = {4, 5, 6, 7, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  // int target = 0;

  int idx = minimum_element_rotated_sorted_array(arr, n);
  cout << idx;

  return 0;
}