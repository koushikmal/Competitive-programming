#include <iostream>
#include <vector>
using namespace std;

int searchPivot(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2, ans = 0;

    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && mid + 1 <= arr.size())
        {
            ans = mid;
        }
        if (arr[mid] < arr[mid - 1] && mid - 1 >= 0)
        {
            ans = mid - 1;
        }

        if (arr[mid] < arr[0])
        {
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    cout << "Pivot " << ans << endl;
    return ans;
}

int main()
{
    vector<int> arr = {3, 1};
    int pivot = searchPivot(arr);
    int s = 0, e = arr.size() - 1, mid, ans = 0, target = 1;

    if (arr[0] <= target && target <= arr[pivot])
    {
        e = pivot;
    }
    else
    {
        s = pivot + 1;
    }
    mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        if (arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }

    cout << "Target Element Index = " << ans << endl;
}