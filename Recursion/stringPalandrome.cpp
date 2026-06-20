#include <iostream>
using namespace std;

bool stringPal(string &str, int s, int e)
{
  // logic here

  if (s >= e)
  {
    return true;
  }

  if (str[s] != str[e])
  {
    return false;
  }

  return stringPal(str, s + 1, e - 1);
}

int main()
{
  string str = "SAMEER";

  cout << stringPal(str, 0, 4);

  return 0;
}