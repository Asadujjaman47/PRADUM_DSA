// Print Duplicate array:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2, 2, 3, 3, 4};
    int count[5] = {0};

    for(int i=0; i<5; i++) {
        count[arr[i]]++;
     }

   for(int i = 0; i<5; i++){
        if(count[i] > 1)
            cout << i << " ";
    }
    return 0;
}