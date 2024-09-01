/*
Print Pattern:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int Total_rows;
    cout << "Enter star number: ";
    cin >>Total_rows;
    cout << "\n";

    for(int row = 1; row <= Total_rows; row++) {

        // for space 
        for(int col = 1; col <= Total_rows - row; col++) {
            cout << " ";
        }

        // For Star
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}