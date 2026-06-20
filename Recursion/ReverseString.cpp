#include <iostream>
using namespace std;

string ReverseSting(string &s, int start, int end)
{

  if (start >= end)
  {
    return s;
  }

  swap(s[start], s[end]);

  return ReverseSting(s, start + 1, end - 1);
}

int main()
{

  string str = "SAMEER";
  string ans = ReverseSting(str, 0, str.length() - 1);
  cout << ans;

  return 0;
}