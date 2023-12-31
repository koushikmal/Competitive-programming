#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

bool checkPali(string s, int i, int j)
{

    while (i < j)
    {
        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }
    return true;
}

int main()
{

    string s = "abca";

    int i = 0, j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {

            if (checkPali(s, i + 1, j) || checkPali(s, i, j - 1))
            {

                cout << "Palindrome Possible";

                return 0;
            }

            else
            {
                cout << "Palindrome Not Possible";
                return 0;
            }
        }

        i++;
        j--;
    }

    cout << "Palindrome Possible";
}