// Find Prime Number:

#include<bits/stdc++.h>
using namespace std;

int findPrime(int num) {
    if(num < 2) 
        cout << "Not Prime";
    
    for(int i=2; i<num; i++) {
        if(num%i == 0) {
            cout << "Not Prime";
            return 0;
        }
        else {
            cout << "Prime";
        }
    }
    return 0;
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    
    findPrime(num);

    return 0;
}