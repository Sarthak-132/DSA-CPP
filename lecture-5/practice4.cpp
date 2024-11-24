#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a = 1;

    int b = a++;

    int c = ++a;
    
    cout << b << endl;

    cout << c;
    
    return 0;
}

// output = 2 3