#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int printArr(int *coins, int n, int sum)
{

    if (sum == 0)
    {
        return 0;
    }

    if (sum < 0)
    {
        return -1;
    }

    int mini = INT_MAX;

    for (int k = 0; k < n; k++)
    {
        int ans = printArr(coins, n, sum - coins[k]);

        if (ans >= 0)
        {
            ans = ans + 1;
            mini = min(mini, ans);
        }
    }

    return mini;
}

int main()
{

    int coins[] = {1, 2, 3};
    int n = 3;
    int sum = 5;
    int ans = printArr(coins, n, sum);

    cout << ans;
}