// Bitwise operators
// 1. AND (&)
// 2. OR (|)
// 3. XOR (^)
// 4. NOT (~)
// 5. Left Shift (<<)
// 6. Right Shift (>>)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//     int a = 4;

//     int b = 5;

//     cout << " a&b : " << (a & b) << endl;

//     cout << " a|b : " << (a & b) << endl;

//     cout << " ~b  : " << (a & b) << endl;
    
//     cout << " a^b : " << (a & b) << endl;

//     return 0;

// }



// here padding in (left shift <<) happens with zero and padding in (right shift >>) compiler dependant 

// it means that whenever shifting will happen it will add 0 at left or right shift.


// 5. Left Shift (<<) - 5 << 1 (It means shift 5 to left by 1)      like - 000101 so make it 0001010

// 6. Right Shift (>>) - 5 >> 1 (It means shift 5 to right by 1)    like - 000101 so make it 00010

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    cout << (17>>1) << endl;
    cout << (17<<1) << endl;
    
    return 0;
}
