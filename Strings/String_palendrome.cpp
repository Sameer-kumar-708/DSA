#include <iostream>
using namespace std;

bool String_pelendrome(string str)
{
  int n = str.size();
  int start = 0, end = n - 1;

  while (start < end)
  {

    if (str[start] != str[end])
    {
      return false;
    }
    start++;
    end--;
  }

  return true;
}

int main()
{
  string str = "abba";

  bool ans = String_pelendrome(str);
  cout << ans;

  return 0;
}