#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int row = 0; row < n; row++)
    {

        int start = row + 1;

        for (int col = 0; col < n; col++)
        {

            if (col >= n - row - 1)
            {

                cout << start++ << " ";
            }
            else
                cout << " "
                     << " ";
        }

        int end = 2 * row;
        for (int col = 0; col < row; col++)
        {
            cout << end-- << " ";
        }

        cout << endl;
    }
    return 0;
}