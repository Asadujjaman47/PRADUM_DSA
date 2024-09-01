// Selection Sort:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] ={2, 7, 8, 3, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++) {
        int index = i;
        for(int j=i; j<n; j++) {
            if(arr[j] < arr[index])
                index = j;
        }

        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
        
        cout << arr[i] << " ";
    }
    return 0;
}