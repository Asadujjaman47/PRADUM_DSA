/*
Print array
4 8 13 11 3 
4 8 13 11 3 
4 8 13 11 3 
4 8 13 11 3 
4 8 13 11 3 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {3, 11, 13, 8, 4};

    for(int i=0; i<5; i++) {
        for(int j = 4; j>=0; j--)
            cout << arr[j] << " ";
        cout << "\n";
    }

    return 0;
}