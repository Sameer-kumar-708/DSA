#include <iostream>
using namespace std;

string add_string(string str1, string str2)
{

  int firstEnd = str1.size() - 1, secondEnd = str2.size() - 1, carry = 0;
  string ans;

  while (firstEnd >= 0 || secondEnd >= 0 || carry != 0)
  {

    int sum = carry;

    if (firstEnd >= 0)
    {
      sum += str1[firstEnd] - '0';
      firstEnd--;
    }
    if (secondEnd >= 0)
    {
      sum += str1[secondEnd] - '0';
      secondEnd--;
    }

    ans.push_back(sum % 10);
    carry = sum / 10;
  }

  // revese the string;
  reverse(ans.begin(), ans.end());
  return ans;
}

int main()
{

  string str1 = "123", str2 = "4567"; /// sum ===> 4687

  string result = add_string(str1, str2);

  cout << "Sum of two string is : ", result;

  return 0;
}