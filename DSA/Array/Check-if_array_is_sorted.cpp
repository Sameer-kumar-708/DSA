#include <iostream>
using namespace std;

bool check(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50};

  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = check(arr, n);
  cout << ans;
  return 0;
}