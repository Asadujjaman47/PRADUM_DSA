// Binary to Decimal:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, sum = 0, mul = 1;
    cout << "Enter Binary Digit: ";
    cin >> num;
    cout << "\n";

    while(num > 0) {
        int rem = num % 10;
        sum = sum + rem*mul;
        num = num/10;
        mul = mul*2;
    }
    cout << sum;

    return 0;
}