#include <iostream>
using namespace std;

int Sec_Max(int arr[], int n)
{
  int fstMax = INT8_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > fstMax)
    {
      fstMax = arr[i];
    }
  }
  // second max
  int secMax = -1;

  for (int j = 0; j < n; j++)
  {
    if (arr[j] != fstMax)
    {
      secMax = max(arr[j], secMax);
    }
  }
  return secMax;
}

int main()
{

  int arr[] = {10, 10, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = Sec_Max(arr, n);
  cout << ans;

  return 0;
}