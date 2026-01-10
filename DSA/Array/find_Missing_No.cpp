#include <iostream>
using namespace std;
int main()
{

  int arr[6] = {1, 3, 4, 5, 6, 7}; // find 2 which is missing in the array
  // int n = sizeof(arr) / sizeof(arr[0]);
  int n = 7;

  int expectedSum = n * (n + 1) / 2;

  int actualsum = 0;
  for (int i = 0; i < 6; i++)
  {
    actualsum += arr[i];
  }
  cout << expectedSum - actualsum;

  return 0;
}