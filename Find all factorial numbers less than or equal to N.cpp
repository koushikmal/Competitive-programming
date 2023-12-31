vector<long long> factorialNumbers(long long N)
{

    long long i = 1, res = 1;

    vector<long long> arr;

    while (res <= N)
    {

        arr.push_back(res);

        res *= ++i;
    }

    return arr;
}