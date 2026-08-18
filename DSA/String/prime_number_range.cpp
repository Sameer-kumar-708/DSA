#include <iostream>
#include <vector>
using namespace std;

bool primeNum(int num)
{

  if (num < 2)
  {
    return false;
  }

  for (int i = 2; i < num; i++)
  {

    if (num % i == 0)
    {
      return false;
    }
    return true;
  }
}

vector<int> primeRange(int num)
{

  vector<int> list;
  for (int i = 2; i < num; i++)
  {

    if (primeNum(i))
    {
      list.push_back(i);
    }
  }

  return list;
}

int main()
{

  int n = 13;
  vector<int> ans = primeRange(n);
  for (int i : ans)
  {
    cout << i << " ";
  }
  return 0;
}
