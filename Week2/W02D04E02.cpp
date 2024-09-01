/*
Print array
2 3 8 7 4 
2 3 8 7 
2 3 8 
2 3 
2 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2, 3, 8, 7, 4};

    for(int i=0; i<5; i++) {
        for(int j = 0; j<5-i; j++)
            cout << arr[j] << " ";
        cout << "\n";
    }

    return 0;
}