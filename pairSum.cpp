#include <iostream>
#include <vector>

using namespace std;

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
  vector<vector<int>> v_final;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    int n1 = arr[i];
    for (int j = i; j < arr.size(); j++)
    {
      if (i == j)
      {
        continue;
      }
      else if (n1 + arr[j] == s)
      {
        vector<int> v;
        if (n1 >= arr[j])
        {
          v.push_back(arr[j]);
          v.push_back(n1);
          v_final.push_back(v);
        }
        else if (n1 < arr[j])
        {
          v.push_back(n1);
          v.push_back(arr[j]);
          v_final.push_back(v);
        }
      }
    }
  }
  return v_final;
}

int main()
{
  vector<int> arr = {1, 5, 2, 4, 7, 8};
  int sum = 6;
  vector<vector<int>> answer = pairSum(arr, 6);
  return 0;
}