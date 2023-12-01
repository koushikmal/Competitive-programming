#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 100;
  int s = 1, e = n - 1, mid = s + (e - s) / 2, target = 0;

  while (s <= e)
  {
    if (mid * mid == n)
    {
      target = mid;
      break;
    }

    if (mid * mid > n)
    {
      e = mid - 1;
    }

    if (mid * mid < n)
    {
      // target = mid;
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  cout << "Square Root = " << target << endl;
}