#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int s = 0, e = 11, mid = s + (e - s) / 2, target = 11;
    int row, col;
    while (s <= e)
    {
        row = mid / 4;
        col = mid % 4;

        if (arr[row][col] == target)
        {
            break;
        }

        if (arr[row][col] > target)
        {
            e = mid - 1;
        }

        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    cout << "Element found at index: "
         << "[" << row << "]"
         << "[" << col << "]";
}