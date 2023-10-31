#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int> rotateArray(vector<int>& a, int n) {
    
  int t = a[0];
  for (int i = 0; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
 a[n - 1] = t;
return a;
}