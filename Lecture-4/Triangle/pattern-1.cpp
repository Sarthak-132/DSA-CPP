// *
// * *
// * * *

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int i, j, n;

    cout<< "Enter number : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
       
    
    return 0;
}