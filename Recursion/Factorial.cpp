#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

long long int factorial(int N)
{

    if (N == 0 || N == 1)
        return 1;

    return N * factorial(N - 1);
}

int main()
{

    int N = 5;
    long long int res = factorial(N);

    cout << res;
}