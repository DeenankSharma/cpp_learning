#include <iostream>
#include <vector>
using namespace std;

void sort012(int *arr, int n)
{
  int left = 0;
  int right = n - 1;
  int change = 0;
  while (left <= right)
  {
    if (arr[left] == 0)
    {
      left++;
      change++;
    }
    else if (arr[right] != 0)
    {
      right--;
    }
    else if (arr[left] != 0 && arr[right] == 0)
    {
      std::swap(arr[left], arr[right]);
      left++;
      right--;
      change++;
    }
  }

  cout << endl;
  left = change;
  right = n - 1;
  while (left <= right)
  {
    if (arr[left] == 1)
    {
      left++;
    }
    else if (arr[right] == 2)
    {
      right--;
    }
    else if (arr[left] == 2 && arr[right] == 1)
    {
      std::swap(arr[left], arr[right]);
      left++;
      right--;
    }
  }
  for (int k = 0; k < n; k++)
  {
    cout << arr[k] << " ";
  }
}

int main()
{
  int arr[6] = {0, 1, 2, 2, 1, 0};
  sort012(arr, 6);
  return 0;
}