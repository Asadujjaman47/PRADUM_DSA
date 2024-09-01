/*
Print col reverse:
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    for(int row = 1; row <= 5; row++) {
        for(int col = 5; col >= 1; col--) {
            cout << col << " ";
        }
        cout << "\n";
    }
    
    return 0;
}