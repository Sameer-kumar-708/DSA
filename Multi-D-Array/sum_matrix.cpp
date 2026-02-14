#include <iostream>
using namespace std;

int main()
{
  int arr1[2][3] = {1, 2, 3,
                    5, 6, 7};
  int arr2[2][3] = {8, 9, 10,
                    11, 12, 13};
  int ans[2][3];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      ans[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}