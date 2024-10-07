// A
// B C
// C D E

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cout<<"Enter a number : ";
    cin>> n;

    char value = 'A';

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << value << " ";
            value++;
        }
        cout<<endl;
    }
    
    return 0;
}