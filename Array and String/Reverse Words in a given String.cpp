#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{

    string S = "i.like.this.program.very.much";

    string str;

    int j = S.length() - 1, count = 0;

    while (j >= 0)
    {

        if (S[j] == '.')
        {
            str += S.substr(j + 1, count);
            str.push_back('.');
            j--;
            count = 0;
        }

        if (j == 0)
        {

            str += S.substr(j, count + 1);
            j--;
        }

        else
        {
            j--;
            count++;
        }
    }

    cout << str << endl;
}