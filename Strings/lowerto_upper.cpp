#include <iostream>
using namespace std;
int main()
{
  // remove element from string
  string str = "hello!";

  int n = str.size();

  for (int i = 0; i < n; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = 'A' + (str[i] - 'a');
    }
  }

  cout << str;

  return 0;
}