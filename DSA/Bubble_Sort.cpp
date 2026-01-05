#include <iostream>
using namespace std;
int main()
{

  // time complexity of Bubble_sort is O(n^2)
  int arr[] = {2, 5, 1, 8, 3, 9, 0, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n - 1; i++)
  {

    for (int j = 0; j < n - i - 1; j++)
    {

      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}