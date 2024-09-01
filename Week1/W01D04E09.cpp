/*
Print Pattern:
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cout << "Enter Star Row: ";
    cin >> n;
    cout <<"\n";
    for(int row=1; row<=n; row++) {
        for(int col=1; col<=row; col++) {
            cout << col << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}