#include <iostream>
using namespace std;

int fibanacii(int n)
{

  if (n == 1)
  {
    return 1;
  }
  if (n == 0)
  { 
    return 0;
  }

  int ans = fibanacii(n - 1) + fibanacii(n - 2);

  return ans;
}
int main()
{

  int n;
  cin >> n;
  int ans = fibanacii(n);
  cout << ans;

  return 0;
}