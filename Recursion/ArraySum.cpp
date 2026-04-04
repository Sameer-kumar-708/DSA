#include <iostream>
using namespace std;

int print(int arr[], int index, int n)
{

  if (index == n)
    return 0;

  int sum = arr[index] + print(arr, index + 1, n);
  return sum;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = print(arr, 0, n);
  cout << ans;
  return 0;
}