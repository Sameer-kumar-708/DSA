#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i, int j)
{

  if (n < 2)
  {
    return true;
  }

  if (arr[i] >= arr[j])
  {

    return false;
  }
  return isSorted(arr, n - 1, i + 1, j + 1);
}

int main()
{

  int arr[] = {1, 6, 3, 4, 5};

  int n = sizeof(arr) / sizeof(arr[0]);
  // cout << n;
  bool ans = isSorted(arr, n, 0, 1);
  cout << ans;

  return 0;
}