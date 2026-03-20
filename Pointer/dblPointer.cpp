#include <iostream>
using namespace std;
int main()
{

  int a = 10;
  int *p = &a;
  int **q = &p;

  cout << a << endl;
  cout << *p << endl;
  cout << **q;

  return 0;
}