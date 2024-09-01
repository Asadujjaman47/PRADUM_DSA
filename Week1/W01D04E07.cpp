/*
Print Pattern:
    1 2 3 4 5 
    6 7 8 9 10 
    11 12 13 14 15 
    16 17 18 19 20 
    21 22 23 24 25 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int counter = 1;
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= 5; col++) {
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }
    
    return 0;
}