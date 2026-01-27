#include <iostream>
#include <vector>
using namespace std;

vector<int> Product_Pair(int arr[], int n, int target)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (arr[i] * arr[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {};
}

int main()
{

  int arr[] = {10, 20, 9, 40}; // return 2 + 7 => 9 =>> [0,1]
  int target = 400;
  int n = sizeof(arr) / sizeof(arr[0]);

  vector<int> idx = Product_Pair(arr, n, target);
  cout << "[" << idx[0] << ", " << idx[1] << "]";

  return 0;
}