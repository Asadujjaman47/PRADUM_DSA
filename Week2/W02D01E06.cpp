// Print Factorial:

#include<bits/stdc++.h>
using namespace std;

// create function
int printFactorial(int num) {
    int result = 1;
    for(int i=1; i<=num; i++) {
        result = result*i;
    }

    return result;
}

int main() {
    int num;
    cout << "Enter the num: ";
    cin >> num;
    cout << "\n";

    int ans = printFactorial(num);
    cout << ans;

    return 0;
}