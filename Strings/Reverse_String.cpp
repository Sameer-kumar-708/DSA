#include <iostream>
using namespace std;

string Reverse_String(string name)
{
  int n = name.size();

  int start = 0, end = n - 1;
  int temp;

  while (start < end)
  {

    temp = name[start];
    name[start] = name[end];
    name[end] = temp;

    start++;
    end--;
  }

  return name;
}

int main()
{

  string name = "hello";

  string ans = Reverse_String(name);
  cout << ans;

  return 0;
}