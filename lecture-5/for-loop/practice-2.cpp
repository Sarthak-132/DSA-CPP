#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    for(int i = 0; i <= 15; i += 2){

        cout << i << " ";           // 0 3 5 7 9 11 13 15

        // The if (i&1) condition checks if i is odd  since i is always even due to the loop increment, 
        // this condition is only true when i is 1, which never happens in this loop.

        if( i&1 ){               

        // As a result, the continue statement is never executed,

            continue;

        } 

        i++;      // 1

    }
    
    return 0;
}

// output - 0 3 5 7 9 11 13 15 