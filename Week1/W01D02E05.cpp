// Find the given year is leap year or not:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cout << "Enter Your Year: ";
    cin >> year;
    if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
        cout << "Leap Year";
    else 
        cout << "Not a Leap Year";
    return 0;
}