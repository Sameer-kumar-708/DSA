#include <iostream>
using namespace std;

void common_prefix(string arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}

int main()
{
  string arr[] = {"flower", "flow", "flight"};
  int n = sizeof(arr) / sizeof(arr[0]);

  common_prefix(arr, n);

  return 0;
}
