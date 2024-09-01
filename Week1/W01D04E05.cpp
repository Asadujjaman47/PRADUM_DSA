/*
Print Pattern:
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= 5; col++) {
            cout << col << " ";
        }
        cout << "\n";
    }
    
    return 0;
}