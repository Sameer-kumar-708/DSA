#include <iostream>
using namespace std;

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  // int n = sizeof(arr1) / sizeof(arr1[0]);

  int i = 0, j = 4, temp;

  while (i < j)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    // swap(arr1[i], arr1[j]);
    i++;
    j--;
  }
  for (int j = 0; j <= 4; j++)
  {
    cout << arr[j] << " ";
  }

  return 0;
}