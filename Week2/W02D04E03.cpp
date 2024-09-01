/*
Print array
3 13 12 7 4 
13 12 7 4 
12 7 4 
7 4 
4 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {3, 13, 12, 7, 4};

    for(int i=0; i<5; i++) {
        for(int j = i; j<5; j++)
            cout << arr[j] << " ";
        cout << "\n";
    }

    return 0;
}