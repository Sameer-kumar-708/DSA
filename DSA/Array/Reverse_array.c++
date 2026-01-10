#include <iostream>
using namespace std;
int main()
{

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5];

  int i = 4, j = 0;

  while (i >= 0)
  {
    arr2[j] = arr1[i];
    j++;
    i--;
  }

  for (int k = 0; k <= 4; k++)
  {
    cout << arr2[k] << " ";
  }

  return 0;
}