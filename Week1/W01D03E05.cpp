// Print all even numbers from 1 to 20:

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int num = 1; num <= 20; num++){
        if(num %2 == 0)
            cout << num << " ";
    }
    return 0;
}