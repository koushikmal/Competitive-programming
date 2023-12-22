#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};

    int s = 0, e = arr.size(), mid = s + (e - s) / 2, target = 80, ans = -1;

    while (s <= e)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }

        if (arr[mid + 1] == target)
        {
            ans = mid + 1;
            break;
        }

        if (arr[mid - 1] == target)
        {
            ans = mid - 1;
        }

        if (arr[mid] > target)
        {
            e = mid - 2;
        }

        else
            s = mid + 2;

        mid = s + (e - s) / 2;
    }
    cout << "Index : " << ans << endl;
}