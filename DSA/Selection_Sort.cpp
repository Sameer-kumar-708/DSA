#include <iostream>
using namespace std;
int main()
{

  int arr[] = {2, 5, 1, 8, 3, 9, 0, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  // for (int i = 0; i < n - 1; i++)
  // {
  //   int index = i;

  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (arr[j] < arr[index])
  //     {
  //       index = j;
  //     }
  //   }
  //   swap(arr[index], arr[i]);
  // }

  for (int i = 0; i < n - 1; i++)
  {
    int idx = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[idx])
      {
        idx = j;
      }
      swap(arr[j], arr[idx]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }

  return 0;
}