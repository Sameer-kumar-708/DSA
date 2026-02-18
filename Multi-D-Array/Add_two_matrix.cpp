#include <iostream>
using namespace std;

int sumMatrix(int arr1[][2], int arr2[][2])
{
  int sum = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum += arr1[i][j] + arr2[i][j];
    }
  }
  return sum;
}

int main()
{

  int arr1[2][2] = {{1, 2},
                    {3, 4}};

  int arr2[2][2] = {{5, 6},
                    {7, 8}};

  int ans = sumMatrix(arr1, arr2);

  return 0;
}