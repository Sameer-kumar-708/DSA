#include <iostream>
#include <climits>
using namespace std;
int main()
{

  // int arr[] = {1, 2, 3, 4, 5, 1};

  // int n = sizeof(arr) / sizeof(arr[0]);
  // int maxSum = 0;

  // brute force approach
  //  for (int i = 0; i < n; i++)
  //  {
  //    int sum = 0;
  //    for (int j = i; j < n; j++)
  //    {
  //      sum = sum + arr[j];
  //      maxSum = max(sum, maxSum);
  //    }
  //  }

  // cout << maxSum;

  // kadane's algorithm
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int n = sizeof(arr) / sizeof(arr[0]);

  int current_sum = 0, maxSum = INT_MIN;

  for (int i = 0; i < n; i++)
  {

    current_sum += arr[i];
    maxSum = max(current_sum, maxSum);

    if (current_sum <= 0)
    {
      current_sum = 0;
    }
  }
  cout << maxSum;

  return 0;
}