#include <iostream>
using namespace std;

// int search_element(int arr[][4], int target, 3, 4)

// {

//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       if (arr[i][j] == target)
//       {
//         return {i, j};
//       }
//     }
//   }
//   return {};
// };

int main()
{

  int arr[3][4] = {1, 2, 3, 4,
                   5, 6, 7, 8,
                   9, 10, 11, 12};

  int target = 11;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == target)
      {
        cout << true;
      }
    }
  }

  // int idx = search_element(arr[][], target, 3, 4);
  // cout << "[" << idx[0] << " " << idx[1] << "]";

  return 0;
}