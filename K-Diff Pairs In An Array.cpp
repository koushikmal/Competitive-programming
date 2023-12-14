#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 1, 5, 4};

    int k = 2;

    sort(nums.begin(), nums.end());

    set<pair<int, int>> ans;

    int i = 0, j = 1, diff;

    while (j < nums.size())
    {
        if (i == j)
        {
            j++;
        }
        else
        {
            diff = nums[j] - nums[i];

            if (diff == k)
            {
                ans.insert({nums[i], nums[j]});
                i++;
                j++;
            }

            else if (diff < k)
            {
                j++;
            }

            else
                i++;
        }
    }
    cout << "Unique pairs: " << ans.size();
}