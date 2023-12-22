#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isPossible(vector<int> A, int N, int M, int sol)
{

    int std = 1, pageSum = 0;

    for (int i = 0; i < N; i++)
    {

        if (pageSum + A[i] <= sol)
        {
            pageSum += A[i];
        }
        else
        {
            std++;
            if (std > M || A[i] > sol)
                return false;

            pageSum = 0;

            pageSum += A[i];
        }
    }
    return true;
}

int main()
{
    vector<int> A = {12, 34, 67, 90};

    int N = 4, M = 2;

    if (M > N)
        return -1;

    int s = 0, sum = 0, ans = -1;

    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(A, N, M, mid))
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