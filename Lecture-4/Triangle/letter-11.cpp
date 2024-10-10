// * * * *
// * * *
// * *
// *

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n ;

    cout << "Enter a number : ";

    cin >> n;

    int row = 1;

    while (row <= n) {


        // space print karo

        int space = n - row + 1;

        while (space) {
            cout << " ";
            space = space - 1;            
        }

        // start printing

        int col = 1;

        while(col<=row){

            cout << "*" ;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
    
    return 0;
}