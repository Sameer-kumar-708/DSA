#include <iostream>
using namespace std;

int add(int num)
{

  if (num == 0)
  {
    return 0;
  }

  return num + add(num - 1);
}

int main()
{
  int n;
  cin >> n;
  cout << add(n);

  return 0;
}