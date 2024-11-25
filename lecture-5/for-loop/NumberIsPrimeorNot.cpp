#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cout << "Enter a number : ";   

    cin >> n;

    bool isPrime = 1;

    for(int i = 2; i < n; i++){

        if(n % i == 0){

            isPrime = 0;

            break;

        }

    }

    if(isPrime == 0){

        cout << "Number is not prime" << endl;

    }

    else{

        cout << "Number is Prime" << endl;

    }
    
    return 0;
}