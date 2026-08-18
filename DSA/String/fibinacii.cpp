#include <iostream>
using namespace std;

int fibonaci(int num)
{

  int a = 0, b = 1, next;

  for (int i = 0; i < num; i++)
  {

    cout << a << " ";
    next = a + b;
    a = b;
    b = next;
  }
  return next;
}

int main()
{

  int n = 7;
  int ans = fibonaci(n);
  cout << ans;

  return 0;
}