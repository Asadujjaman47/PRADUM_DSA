// Print Array(No repeat element):

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {2, 4, 6, 4, 2, 8, 6};
    int ans = 0;

    for(int i=0; i<7; i++) {
        ans = ans^arr[i];
    }
    cout << ans;

    return 0;
}