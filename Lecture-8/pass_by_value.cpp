#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void dummy(int n){

    n++;

    cout << " n is " << n <<endl;            // n is 325

} 

int main() {
    
    int n;

    cin>>n;

    dummy(n);
    
    cout << "n is " << n << endl;          // n is 324

    return 0;

}