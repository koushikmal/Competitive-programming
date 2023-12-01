#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40};
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2, target = 0;

    while (s <= e)
    {
        if (s == e)
        {
            target = s;
            break;
        }

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
                s = mid + 2;
            else
            {
                target = mid;
                e = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
                e = mid - 1;
            else
            {
                s = mid + 1;
            }
        }

        mid = s + (e - s) / 2;
    }
    cout << "Odd Occuring = " << arr[target] << endl;
}