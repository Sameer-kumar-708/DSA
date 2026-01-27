#include <iostream>
using namespace std;

int Search_Insert_Position(int arr[], int n, int target)
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
    if (arr[mid] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return start;
}

int main()
{

  int arr[] = {1, 3, 4, 5, 7, 8, 10, 14};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 13;

  int idx = Search_Insert_Position(arr, n, target);
  cout << idx;

  return 0;
}