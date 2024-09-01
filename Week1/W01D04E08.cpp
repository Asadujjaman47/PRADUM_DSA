/*
Print Pattern:
    * 
    * * 
    * * * 
    * * * * 
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
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
}