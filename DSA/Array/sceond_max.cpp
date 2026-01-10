#include <iostream>
using namespace std;
int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int fstMax = INT8_MIN;

  for (int i = 1; i <= n; i++)
  {
    if (arr[i] > fstMax)
    {
      fstMax = arr[i];
    }
  }
  // second max
  int secMax = INT8_MIN;

  for (int j = 1; j <= n; j++)
  {
    if (arr[j] != fstMax)
    {
      secMax = max(arr[j], secMax);
    }
  }
  cout << secMax;

  return 0;
}