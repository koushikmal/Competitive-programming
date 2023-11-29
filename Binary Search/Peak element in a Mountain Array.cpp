#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr {1, 2, 3, 4, 5, 3, 1};
  int s=0, e=arr.size()-1, mid=s+(e-s)/2, target;

  while(s<e){
    if(arr[mid]>arr[mid+1]){
      target=arr[mid];
      e=mid;
    }

    if(arr[mid]<arr[mid+1]){
      s=mid+1;
    }
    
    mid = s+(e-s)/2;
  }
  cout<< "Peak Element = "<<target<<endl;
  
}