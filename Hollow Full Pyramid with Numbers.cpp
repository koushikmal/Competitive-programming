#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        int start = 2;
        for (int col = 0; col < n; col++)
        {

            if (col == n - row - 1)
                cout << 1 << " ";

            else if (col < n - row - 1)
                cout << " "
                     << " ";
        }

        for (int col = 0; col < row * 2; col++)
        {

            if (col == row * 2 - 1)
                cout << row + 1 << " ";

            else if (row == n - 1 && col % 2 != 0)
                cout << start++ << " ";

            else
                cout << " "
                     << " ";
        }

        cout << endl;
    }
    return 0;
}