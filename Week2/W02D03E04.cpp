// Print prime numbers in Array(Using Function):

#include<bits/stdc++.h>
using namespace std;

void prime(int num) {
    if(num < 2)
        return;
    
    for(int i=2; i<num; i++) {
        if(num%i == 0)
            return;
    }
    cout << num << " ";
}

int main() {
    int arr[8] = {2, 3, 7, 1, -11, 8, 13, 12};

    for(int i=0; i<8; i++) {
        prime(arr[i]);
    }
    
    return 0;
}