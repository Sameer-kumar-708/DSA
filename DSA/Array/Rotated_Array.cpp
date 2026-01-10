#include <iostream>
using namespace std;
int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  int last = arr[n - 1];
  // int temp = last;

  for (int i = n - 2; i >= 0; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[0] = last;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }

  return 0;
}