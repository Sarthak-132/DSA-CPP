// A
// A B
// A B C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
    
    return 0;
    
}