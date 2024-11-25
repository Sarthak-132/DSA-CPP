#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n; 

    int sum = 0;

    cout << "enter a number : ";

    cin >> n;

    for(int i = 1; i <= n; i++){

        sum += i;

    }

    cout << "sum of 1 to n numbers : "<< sum <<endl;
    
    return 0;
}