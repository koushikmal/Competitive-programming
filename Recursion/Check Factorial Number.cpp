#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int isFactorial(int N)
{

    int i = 1, res = 1;

    while (i <= N)
    {
        res *= i;

        i++;

        if (res == N)
            return 1;
    }
    return 0;
}

int main()
{

    int N = 6;

    cout << isFactorial(N);
}