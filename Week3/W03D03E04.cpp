// Peak Index in a Mountain Array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 6, 5, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    long long mid, start = 0, end = n-1, index;

    while (start <= end) {
        mid = end + (start-end) / 2;
        if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) {
            index = mid;
            break;
        }
        else if (arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << index;

    return 0;
}
