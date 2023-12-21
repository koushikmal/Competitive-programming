#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{

    string s = "geeks for geeks";

    string str = "";

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ' ')
        {
            str += s[i];
        }
    }

    cout << str;
}