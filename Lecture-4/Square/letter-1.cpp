// A A A 
// B B B 
// C C C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            char ch = 'A' + i - 1;
            cout << ch << " ";
            // cout << char(i+64) << " ";
        }
        cout<<endl;
    }

    return 0;
     
}