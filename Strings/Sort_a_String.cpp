#include <iostream>
using namespace std;

string Sort_a_String(string name)
{

  int n = name.size();
  int idx;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (name[i] > name[j])
      {
        swap(name[i], name[j]);
      }
    }
  }
  return name;
}

int main()
{

  string name = "sameer";
  string ans = Sort_a_String(name);
  cout << ans;
  return 0;
}