#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int main() {

  string s = "daabcbaabcbc";
  string part = "abc";
  while(s.find(part) != string::npos){
      s.erase(s.find(part), part.length());
  }
  cout<<s;
}