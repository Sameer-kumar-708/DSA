#include <iostream>
using namespace std;
int main()
{

  int arr[] = {1, 2, 3, 4, 5};

  int *p = arr;

  cout << *p;
  cout << *(p + 1);
  cout << *(p + 2);
  cout << *(p + 3);
  cout << *(p + 4);

  return 0;
}