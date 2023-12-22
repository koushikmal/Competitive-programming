#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string s = "abbaca";
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (str.length() == 0)
            str.push_back(s[i]);

        else if (s[i] == str[str.length() - 1])
            str.pop_back();

        else
        {
            str.push_back(s[i]);
        }
    }
    cout << str;
}