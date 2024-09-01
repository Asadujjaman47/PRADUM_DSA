// Print smallest number in array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {7, 11, -2, 8, 170, -4, 0, 11};
    int small_N = arr[0];

    for(int i=0; i<7; i++) {
        if(small_N > arr[i])
            small_N = arr[i];
    }
    cout << small_N;

    return 0;
}