#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

void printArr(string str, string out)
{

    if (str.empty())
    {
        cout << out << endl;
        return;
    }

    printArr(str.substr(1), out + str[0]);

    printArr(str.substr(1), out);
}

int main()
{

    string str = "abc";
    string out = "";
    printArr(str, out);

    // cout << "Key Found at Index: " <<ans;
}