// Function:

#include<bits/stdc++.h>
using namespace std;

// create function
int isEvenOdd(int num) {
    if(num % 2 == 0)
        return 0;
    return 1;

}

int main() {
    int num;
    cout << "Enter Num: ";
    cin >> num;

    int n = isEvenOdd(num);
    
    if(n == 0) 
        cout << "Even";
    else 
        cout << "Odd";

    return 0;
}