#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int bs(vector<int> &arr, int s, int k)
{

    int e = arr.size(), mid;
    while (s <= e)
    {

        mid = s + (e - s) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] > k)
            e = mid - 1;

        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 1, 5, 4};

    int diff = 0;

    sort(nums.begin(), nums.end());

    set<pair<int, int>> ans;
    int temp;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        temp = bs(nums, i + 1, nums[i] + diff);

        if (temp != -1)
        {
            ans.insert({nums[1], nums[temp]});
        }
    }
    cout << "Unique pairs: " << ans.size();
}