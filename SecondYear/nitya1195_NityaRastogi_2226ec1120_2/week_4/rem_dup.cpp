#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int removeDuplicates(vector<int> &a, int n) {
	
 int i = 0;
for (int j = 1; j < n; j++) {
    if (a[j] != a[i]) {
      a[++i] = a[j];
    }
  }

  
  return i + 1;
}