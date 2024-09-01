// Function Overloading:

#include<bits/stdc++.h>
using namespace std;

void Add(int num1, int num2) {
    int sum = num1 + num2;
    cout << sum << " ";
}

void Add(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    cout << sum << " ";
}

int main() {
    Add(20, 30);
    Add(20, 30, 40);

    return 0;
}