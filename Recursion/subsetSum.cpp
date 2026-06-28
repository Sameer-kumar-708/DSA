#include <iostream>
using namespace std;

#include <vector>

void subsetSum(int arr[], int index, int n, int sum, vector<int> &ans)
{
  if (index == n)
  {
    ans.push_back(sum);
    return;
  }

  // ak baar add karna hai
  subsetSum(arr, index + 1, n, sum + arr[index], ans);
  // ek baar add nahi karna hai
  subsetSum(arr, index + 1, n, sum, ans);
}

int main()
{

  int arr[] = {1, 2, 3};
  vector<int> ans;
  int n = sizeof(arr) / sizeof(arr[0]);

  subsetSum(arr, 0, n, 0, ans);

  // Print output
  for (int x : ans)
  {
    cout << x << " ";
  }
  return 0;
}