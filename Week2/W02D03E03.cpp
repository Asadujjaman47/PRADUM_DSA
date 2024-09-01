// Find Odd numbers in Array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2, 5, 3, -3, 8, 4, 2, -6};
    int largest = arr[0];
    for(int i=1; i<=8; i++) {
        if(arr[i]%2 == 1 || arr[i]%2 == -1)
            cout << arr[i] << " ";
    }
    
    return 0;
}