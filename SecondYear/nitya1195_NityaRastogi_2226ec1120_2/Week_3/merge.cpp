#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
         int i = 0, j = 0, k = n - 1;

            while (i <= k && j < m) {
                if (arr1[i] <= arr2[j]) {
                    i++;
                } else {
                    swap(arr2[j], arr1[k]);
                    j++;
                    k--;
                }
            }

            sort(arr1, arr1 + n);
            sort(arr2, arr2 + m);

        } 
};