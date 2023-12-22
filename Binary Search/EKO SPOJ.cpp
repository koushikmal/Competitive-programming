#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isPossible(int n, int m, vector<int> &arr, long long height)
{

    int total = 0, diff = 0;

    for (int i = 0; i < n; i++)
    {

        if (height < arr[i])
        {
            diff = arr[i] - height;
            total += diff;
        }

        if (total >= m)
            return true;
    }

    return false;
}

int main()
{

    vector<int> tree = {20, 15, 10, 17};

    int N = 4, M = 7;

    long long s = 0, sum = 0;
    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        sum += tree[i];
    }

    long long e = sum;

    long long mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(N, M, tree, mid))
        {

            ans = mid;

            s = mid + 1;
        }

        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    // return ans;
    cout << ans;
}