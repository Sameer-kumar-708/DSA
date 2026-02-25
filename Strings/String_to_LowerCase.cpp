#include <iostream>
using namespace std;
int main()
{
  // remove element from string
  string str = "HELLO!";

  int n = str.size();

  int ans;

  for (int i = 0; i < n; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = 'a' + (str[i] - 'A');
    }
  }

  cout << str;

  return 0;
}