#include <iostream>
#include <string>
using namespace std;

bool palindrome(string name, int first, int last)
{

  for (int i = first; i <= last - 1; i++)
  {
    for (int j = last - 1; j >= first; j--)
    {

      if (name[i] == name[j])
      {
        return true;
      }
      else
      {
        return false;
      }
    }
  }
  first++;
  last--;

  // string ans = "";

  // for (int i = n - 1; i >= 0; i--)
  // {

  //   ans += name[i];
  // }

  // if (ans == name)

  // {
  //   return true;
  // }
  // else
  // {
  //   return false;
  // }
}

// bool palindrome(string name, int first, int last)
// {

//   while (first < last)
//   {

//     if (name[first] == name[last])
//     {

//       return true;
//       first++;
//       last--;
//     }
//     else

//       return false;
//   }
// }

int main()
{

  string name = "SAMEER";
  int len = name.length();
  bool ans = palindrome(name, 0, len);
  cout << ans;

  return 0;
}