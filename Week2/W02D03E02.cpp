// Find Largest numbers in Array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {6, 2, 4, 9, 7, 8};
    int largest = arr[0];
    for(int i=1; i<6; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    cout << largest;
    
    return 0;
}