// Print big Number:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 20, b = 40, c = 60;
    if(a>=b && a>=c) 
        cout << a;
    // if(b>=a && b>=c)
    if(b>=c)
        cout << b;
    else 
        cout << c;
    return 0;
}