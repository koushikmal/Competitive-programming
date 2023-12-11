#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 7, 8, 1, 2, 3, 4, 5};
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2, ans = 0;

    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && mid + 1 <= arr.size())
        {
            ans = arr[mid];
        }
        if (arr[mid] < arr[mid - 1] && mid - 1 >= 0)
        {
            ans = arr[mid - 1];
        }

        if (arr[mid] < arr[0])
        {
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    cout << "Pivot Element = " << ans << endl;
}