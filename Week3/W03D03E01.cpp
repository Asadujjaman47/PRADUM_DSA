// BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {5, 6, 8, 9, 11, 15, 17, 21};
    int n = sizeof(nums)/sizeof(nums[0]);

    int mid, target = 15, start = 0, end = n-1;

    while (start <= end) {
        mid = (start + end) / 2;
        if (nums[mid] == target) {
            cout << mid;
            return 0;
        }
        else if (nums[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << "-1";
   
    return 0;
}

// TC: O(log2 n)
// SC: O(1) Auxiliary, O(n) Total