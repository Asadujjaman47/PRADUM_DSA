// Calculate Average value of Two numbers using Function:

#include<bits/stdc++.h>
using namespace std;

// create function
int avgTwoNum(int num1, int num2) {
    int sum = num1+num2;
    int avg = sum/2;

    return avg;
}

int main() {
    int num1, num2;
    cout << "Enter the num1: ";
    cin >> num1;
    cout << "\n";
    cout << "Enter the num2: ";
    cin >> num2;
    cout << "\n";

    int result = avgTwoNum(num1, num2);
    cout << result;

    return 0;
}