// Print Even number in array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2, 3, 7, -6, -11, 8, 13, 12};

    for(int i=0; i<8; i++) {
        if(arr[i]%2 == 0)
            cout << arr[i] << " ";
    }

    return 0;
}