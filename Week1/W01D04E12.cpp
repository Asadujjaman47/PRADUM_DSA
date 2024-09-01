/*
Print Pattern:
    12345
     2345
      345
       45
        5
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0; i<5; i++) {
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        for(int j=i; j<5; j++) {
            cout << j+1;
        }
        cout << "\n";
    }
    cout << "\n";
}