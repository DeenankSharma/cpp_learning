#include <iostream>
#include <vector>
using namespace std;

int floorSqrt(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }

  long long s = 1, e = n, mid;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    long long square = mid * mid;

    if (square == n)
    {
      return (int)mid;
    }
    if (square < n)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }

  return (int)e;
}

int main()
{
  int n = 99;
  int root = floorSqrt(n);
  cout << "root is : " << root << endl;
  return 0;
}