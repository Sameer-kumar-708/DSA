#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
  vector<int> temp(end - start + 1);

  int left = start;
  int right = mid + 1;
  int index = 0;

  // Merge both sorted halves
  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      index++;
      left++;
    }
    else
    {
      temp[index] = arr[right];
      index++;
      right++;
    }
  }

  // Copy remaining elements from the left half
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++;
    left++;
  }

  // Copy remaining elements from the right half
  while (right <= end)
  {
    temp[index] = arr[right];
    index++;
    right++;
  }

  // Copy merged elements back into the original array
  index = 0;

  for (int i = start; i <= end; i++)
  {
    arr[i] = temp[index];
    index++;
  }
}

void mergeSort(vector<int> &arr, int start, int end)
{
  if (start >= end)
  {
    return;
  }

  int mid = start + (end - start) / 2;

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  merge(arr, start, mid, end);
}

int main()
{
  vector<int> arr = {9, 3, 4, 5, 6, 2, 1, 8};

  mergeSort(arr, 0, arr.size() - 1);

  for (int num : arr)
  {
    cout << num << " ";
  }

  return 0;
}
