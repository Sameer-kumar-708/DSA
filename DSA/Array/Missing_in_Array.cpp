#include <iostream>
using namespace std;

int Missing_Array(int arr[], int n)
{

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ arr[i];
  }
  for (int i = 1; i <= n + 1; i++)
  {
    ans = ans ^ i;
  }

  return ans;
}

int main()
{

  int arr[] = {8, 2, 4, 5, 3, 7, 1};

  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = Missing_Array(arr, n);
  cout << ans;
  return 0;
}