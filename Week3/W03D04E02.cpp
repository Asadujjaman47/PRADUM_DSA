// Find how many times rotate the arr:

#include<bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n) {
    if(arr[0] < arr[n-1])
        return 0;
    
    int low = 0, high = n-1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(arr[low] <= arr[mid] && arr[high] <= arr[mid]) {
            low = mid+1;
        }
        else 
            high = mid;    
    }
    return low;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << findKRotation(arr, n);
    
    return 0;
}
