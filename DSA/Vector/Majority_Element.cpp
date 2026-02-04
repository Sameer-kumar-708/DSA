#include <iostream>
#include <algorithm>
using namespace std;

// int Majority_Element(int arr[], int n) // brute force approch
// {
//   int frc = 0;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= n; j++)
//     {
//       if (arr[i] == arr[j])
//         frc++;
//     }
//     if (frc > n / 2)
//     {
//       return arr[i];
//     }
//   }
//   return -1;
// }

int Majority_Element(int arr[], int n) // optimized approch
{
  sort(arr, arr + n);

  int frc = 1, ans = arr[0];

  for (int i = 1; i < n; i++)
  {

    if (arr[i] == arr[i - 1])
    {
      frc++;
    }
    else
    {
      frc = 1;
      ans = arr[i];
    }

    if (frc > n / 2)
    {
      return ans;
    }
  }
}

int main()
{
  int arr[] = {2, 2, 1, 1, 1, 2, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << Majority_Element(arr, n);
  return 0;
}
