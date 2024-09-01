// Given a no. check if it is diviable by 3 & 5:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 27;
    if(num%3 == 0 && num%5==0)
        cout << "Perfect";
    else
        cout << "Not Perfect";
    return 0;
}