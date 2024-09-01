// Convert Decimal to Binary:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, sum=0, mul=1;
    cout << "Enter your number: ";
    cin >> num;
    cout << "\n";

    while(num>0) {
        int digit = num%2;
        sum = sum + digit*mul;
        num = num/2;
        mul = mul*10;
    }
    cout << sum;

    return 0;
}