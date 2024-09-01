/*
Print Pattern:
    a 
    b b 
    c c c 
    d d d d 
    e e e e e 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cout << "Enter Star Row: ";
    cin >> n;
    cout <<"\n";
    for(int row=1; row<=n; row++) {
        char c = 'a' + row-1;
        for(int col=1; col<=row; col++) {
            cout << c << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}