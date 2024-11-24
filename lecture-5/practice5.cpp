#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a = 1;

    int b = 2;

    if(a-- > 0 || ++b > 2){
        cout << "Stage 1 - inside If ";
    }
    else{
        cout << "Stage 2 - inside Else ";
    }

    cout << a << " " << b << endl;
    
    return 0;
}

// output - Stage 1 - inside If 0 2