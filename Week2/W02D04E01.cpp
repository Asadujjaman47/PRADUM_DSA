// Print array 5 times:
/*
2 2 2 2 2 
3 3 3 3 3 
8 8 8 8 8 
7 7 7 7 7 
4 4 4 4 4 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2, 3, 8, 7, 4};

    for(int i=0; i<5; i++) {
        for(int j = 0; j<5; j++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}