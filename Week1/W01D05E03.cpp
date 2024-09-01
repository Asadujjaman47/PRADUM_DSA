/*
Print Pattern:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the row number: ";
    cin >>n;
    cout << "\n";

    // upeer side
    for(int row = 1; row<=n; row++) {

        // star
        for(int col=1; col<=row; col++) {
            cout << "*";
        }

        // space
        for(int col=1; col <= 2*n - 2*row; col++) {
            cout << " ";
        }

        // star
        for(int col=1; col<=row; col++) {
            cout << "*";
        }
        cout << "\n";
    }

    // lower side
    for(int row=1; row<=n-1; row++) {

        //star
        for(int col=1; col <= n - row; col++) {
            cout << "*";
        }

        // space
        for(int col=1; col<=2*row; col++) {
            cout << " ";
        }

        // star
        for(int col=1; col<= n-row; col++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}