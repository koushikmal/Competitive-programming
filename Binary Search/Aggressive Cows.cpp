#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isPossible(int n, int k, vector<int> &stalls, int diff)
{

    int cow = 1, lastPosition = stalls[0];

    for (int i = 0; i < n; i++)
    {

        if (stalls[i] - lastPosition >= diff)
        {

            cow++;

            lastPosition = stalls[i];
        }

        if (cow == k)
            return true;
    }
    return false;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int n = 5, cowNum = 3;

    int s = 0, ans = -1;

    sort(stalls.begin(), stalls.end());

    int e = stalls[stalls.size() - 1] - stalls[0];

    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(n, cowNum, stalls, mid))
        {
            ans = mid;

            s = mid + 1;
        }

        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    cout << "Maximum possible: " << ans;
}