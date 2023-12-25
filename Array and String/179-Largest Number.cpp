#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{

    vector<string> arr;

    vector<int> nums = {3, 30, 34, 5, 9};

    for (int i = 0; i < nums.size(); i++)
    {
        arr.push_back(to_string(nums[i]));
    }

    sort(arr.begin(), arr.end(), [](string &s1, string &s2)
         { return s1 + s2 > s2 + s1; });

    string res = "";

    for (auto s : arr)
    {
        res += s;
    }

    if (res[0] == '0' && res.size() >= 1)
        cout << "0";

    cout << res;
}