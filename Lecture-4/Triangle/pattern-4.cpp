// 1 
// 2 3
// 4 5 6 
// 7 8 9 10

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int i , j , n;

    int count = 1;
    
    cout << "Enter number : ";

    cin >> n ;

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            cout << count << " ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}