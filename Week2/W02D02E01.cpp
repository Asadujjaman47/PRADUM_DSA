// Print Odd and Even:

#include<bits/stdc++.h>
using namespace std;

int IsEvenOdd(int num) {
    if(num % 2 == 0) 
        cout << "Even";
    else 
        cout << "Odd";
    return 0;
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    
    IsEvenOdd(num);

    return 0;
}