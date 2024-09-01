// Insertion Sort:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] ={4, 6, 3, 11, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n-1; i++) {
        for(int j=i; j>=0; j--) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else
                break;
        }
    }

    // print array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}