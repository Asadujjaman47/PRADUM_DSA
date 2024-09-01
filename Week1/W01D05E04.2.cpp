// Find digit count usng while loop:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter your digit: ";
    cin >> n;
    cout << "\n";

    int digit = 0;
    while(n) {
        digit++;
        n = n/10;
    }
    cout << digit;

    return 0;
}