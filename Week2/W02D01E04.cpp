// Switch:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter the num: ";
    cin >> num;
    cout << "\n";

    switch (num)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Thuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thrusday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
        cout << "Number not valid";
        break;
    }

    return 0;
}