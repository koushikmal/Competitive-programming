#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

string checkSum(vector<int> arr, int n, int s)
{

    int start = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        while (sum >= s && start <= i)
        {

            if (sum == s)
                //  {cout << start <<" and " <<end  << endl;}
                return "Found";

            else
            {
                sum -= arr[start];
                start++;
            }
        }
    }
    return "Not found";
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = 5, sum = 12;
    cout << checkSum(arr, n, sum) << endl;
}