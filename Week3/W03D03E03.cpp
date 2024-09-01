// Search Insert Position:

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 2, 4, 5, 8, 11};
    int n = arr.size();
    int target = 2; // target

    long long mid, start = 0, end = n-1, index;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
            index = mid + 1;
        }
        else {
            end = mid - 1;
            index = mid;
        }
    }

    cout << "Index: " << index;

    return 0;
}
