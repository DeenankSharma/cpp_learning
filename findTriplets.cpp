#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
  vector<vector<int>> v_final;
  for (int i = 0; i < n; i++)
  {
    vector<int> v;
    int n1 = arr[i];
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        continue;
      }
      else 
      {
        int n2 = arr[j];
        for (int k = 0; k < n; k++)
        {
          if (k == i || k == j)
          {
            continue;
          }
          else
          {
            int n3 = arr[k];
            if (n1 + n3 + n2 == K)
            {
              v.push_back(n1);
              v.push_back(n2);
              v.push_back(n3);
              v_final.push_back(v);
            }
          }
        }
      }
    }
  }
  return v_final;
}

int main()
{
  vector<int> arr = {0, 1, 2, 3, 4, 5, 1};
  findTriplets(arr, arr.size(), 6);

  return 0;
}