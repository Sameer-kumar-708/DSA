#include <iostream>
using namespace std;

void printArray(int *arr, int n, int i)
{

  if (n == i)
  {
    return;
  }

  // cout << arr[i] << " ";

  printArray(arr, n, i + 1);
  cout << arr[i] << " ";
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, n, 0);

  return 0;
}