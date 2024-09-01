// Print Prime Number:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(n<2) {
        cout << "Not a Prime";
        return 0;
    }

    for(int num = 2; num <= n-1; num ++) {
        if(n % num == 0) {
            cout << "Not a Prime";
            return 0;
        }
    }

    cout << "Prime Number";
    return 0;
}