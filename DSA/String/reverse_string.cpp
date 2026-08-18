#include <iostream>
#include <string>
using namespace std;

string reverse(string name, int n)
{

  string ans = "";

  for (int i = n - 1; i >= 0; i--)
  {

    ans += name[i];
  }

  return ans;
}

int main()
{

  string name = "SHRISTI";
  int len = name.length();
  string ans = reverse(name, len);
  cout << ans;

  return 0;
}