#include <iostream>
using namespace std;

int searchMatrix(int arr[][4], int target)
{

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{

  int arr[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};

  int target = 11;

  int ans = searchMatrix(arr, target);
  cout << ans;

  return 0;
}