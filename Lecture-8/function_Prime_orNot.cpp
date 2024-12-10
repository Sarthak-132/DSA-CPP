#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    
    int n;

    cin>>n;

    if(isPrime((n))){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"not prime" << endl;
    }
    
    return 0;
}