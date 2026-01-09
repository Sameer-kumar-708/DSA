#include <iostream>
#include <vector>
using namespace std;

vector<int> find_firstand_last_ele(int arr[], int n, int target)
{

  int start = 0;
  int end = n - 1;
  int first = -1, last = -1;

  // first ouccerence
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      first = mid;
      end = mid - 1;
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

  // last occurence

  start = 0;
  end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      last = mid;
      start = mid + 1;
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

  return {first, last};
}

int main()
{

  int arr[] = {1, 2, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 5;

  vector<int> idx = find_firstand_last_ele(arr, n, target);
  cout << idx[0] << " " << idx[1];

  return 0;
}