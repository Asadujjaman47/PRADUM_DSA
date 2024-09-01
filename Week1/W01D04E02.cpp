// Print Fibonacci Series:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int first_num = 0;
    int second_num = 1;
    int current_num;

    if(n == 1) {
        cout << 0;
        return 0;
    }

    if(n == 2) {
        cout << 1;
        return 0;
    }

    for(int i = 3; i <= n; i++) {
        current_num = first_num + second_num;
        first_num = second_num;
        second_num = current_num;
    }
    cout << current_num;
    return 0;
}