#include <iostream>
#include <vector>
using namespace std;

int missingNum(int arr[], int k, int n)
{

  int missingNumber = k;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > missingNumber)
    {
      return missingNumber;
    }
    else
    {
      missingNumber++;
    }
  }
  return missingNumber;
};

int main()
{

  int arr[] = {2, 5, 9, 12};
  int k = 8;
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = missingNum(arr, k, n);

  cout << ans;

  return 0;
}