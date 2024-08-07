#include <iostream>
#include <vector>
using namespace std;
int findPivot(vector<int> arr)
{
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + ((e - s) / 2);
  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + ((e - s) / 2);
  }
  return s;
}

int search(vector<int> &arr, int n, int k)
{
  int s, e, mid;
  if (arr.size() == 1)
  {
    return 0;
  }
  if (arr.back() > arr.front())
  {
    s = 0;
    e = n - 1;
    mid = s + ((e - s) / 2);
    while (s <= e)
    {
      if (arr[mid] == k)
      {
        return mid;
      }
      else if (k > arr[mid])
      {
        s = mid + 1;
      }
      else if (k < arr[mid])
      {
        e = mid - 1;
      }
      mid = (s) + ((e - s) / 2);
    }
    return -1;
  }
  int pivot_index = findPivot(arr);
  if (k < arr[0])
  {
    s = pivot_index;
    e = n - 1;
    mid = s + ((e - s) / 2);
  }
  else
  {
    s = 0;
    e = pivot_index - 1;
    mid = s + ((e - s) / 2);
  }
  while (s <= e)
  {
    if (arr[mid] > k)
    {
      e = mid - 1;
    }
    else if (arr[mid] < k)
    {
      s = mid + 1;
    }
    else if (arr[mid] == k)
    {
      return mid;
    }
    mid = s + ((e - s) / 2);
  }
  return -1;
}
int main()
{
  vector<int> arr = {1, 2};
  int index = search(arr, 2, 2);
  cout << "index is : " << index << endl;
  return 0;
}