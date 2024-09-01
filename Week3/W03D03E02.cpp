// left most and right most index:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int v[] = {1, 2, 2, 2, 4, 5, 8, 11};
    int n = sizeof(v)/sizeof(v[0]);
    int x = 2; // target

    long long mid, start = 0, end = n-1, left_index, right_index;

    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] == x) {
            left_index = mid;
            end = mid-1;
        }
        else if (v[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }

    start = 0;
    end = n-1;
    
    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] == x) {
            right_index = mid;
            start = mid + 1;
        }
        else if (v[mid] > x)
            end = mid - 1; 
        else
            start = mid + 1;
    }

    cout << "left_index: " << left_index << " " << "right_index: " << right_index;
   
    return 0;
}
