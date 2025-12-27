#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int target = 10;
  int idx = -1;

  for (int i = 0; i < 8; i++)
  {
    if (arr[i] == target)
    {
      idx = i;
    }
  }
  cout << idx;

  return 0;
}