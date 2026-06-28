#include <iostream>
#include <vector>
using namespace std;

void perfectSumProblem(int arr[], int index, int n, int sum, int target, int &count)
{

  if (target == sum)
  {
    count++;
    return;
  }
  if (target < sum || index == n)
  {
    return;
  }

  // ek baar add kana hai
  perfectSumProblem(arr, index + 1, n, sum + arr[index], target, count);
  // ek baar add kana hai
  perfectSumProblem(arr, index + 1, n, sum, target, count);
}

int main()
{

  int arr[] = {2, 5, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 10;
  int count = 0;

  perfectSumProblem(arr, 0, n, 0, target, count);
  cout << count;

  return 0;
}