#include <iostream>
using namespace std;

int max_sum_idx(int arr[3][4])
{

  int maxSum = INT8_MIN, index = -1, totel = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      totel = totel + arr[i][j];
    }
    if (maxSum < totel)
    {
      maxSum = totel;
      index = i;
    }
  }
  return index;
}

int main()
{
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};

  int idx = max_sum_idx(arr);
  cout << idx;
  return 0;
}
