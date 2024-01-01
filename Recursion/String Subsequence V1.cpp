#include <iostream>
#include <vector>
using namespace std;

void printArr(string str, string output, int i)
{

    if (i >= str.length())
    {
        cout << "Output: " << output << endl;
        return;
    }

    printArr(str, output + str[i], i + 1);

    printArr(str, output, i + 1);
}

int main()
{

    string str = "abc";
    string out = "";
    int i = 0;
    printArr(str, out, i);
}
