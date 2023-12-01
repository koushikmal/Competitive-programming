#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 10};
  int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2, target;

  while (s <= e)
  {
    if (mid + 1 == arr[mid])
    {
      s = mid + 1;
    }
    if (mid + 2 == arr[mid])
    {
      target = arr[mid];
      e = mid;
    }

    if (e == s)
    {
      target = arr[s];
      break;
    }

    mid = s + (e - s) / 2;
  }
  cout << "Missing Element = " << target - 1 << endl;
}