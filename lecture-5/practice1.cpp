#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a, b;

    a = 10;

    b = 1;

    if(++a){
        cout << b;
    }   
    else{
        cout << ++b;
    }
    
    return 0;
}

// output = 1