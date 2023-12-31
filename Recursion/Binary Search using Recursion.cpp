#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int printArr(int *arr, int k, int s, int e)
{

    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return mid;

    if (arr[mid] > k)
        return printArr(arr, k, s, mid - 1);

    else
        return printArr(arr, k, mid + 1, e);
}

int main()
{

    int arr[] = {11, 22, 33, 44, 55};
    int key = 55, n = 5, s = 0, e = n - 1;
    int ans = printArr(arr, key, s, e);

    cout << "Key Found at Index: " << ans;
}