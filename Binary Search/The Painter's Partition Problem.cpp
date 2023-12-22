#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int k, long long sol)
{

    long long timeSum = 0, painter = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] + timeSum <= sol)
        {

            timeSum += arr[i];
        }
        else
        {
            painter++;

            if (painter > k || arr[i] > sol)
                return false;

            timeSum = arr[i];
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {5, 10, 30, 20, 15};

    int n = 5, k = 3;

    long long s = 0, ans = -1;

    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    long long e = total;
    long long mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    cout << "Minimum Number of Pages: " << ans;
}