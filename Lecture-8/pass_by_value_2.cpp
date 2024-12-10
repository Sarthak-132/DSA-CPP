#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int update(int a){
    
    a-=5;
    return a;
}

int main() {
    
    int a = 15;

    update(a);

    cout << a << endl;        // 15
    
    return 0;
}



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// int update(int a){
    
//     a-=5;
//     return a;
// }

// int main() {
    
//     int a = 15;

//     int b = update(a);

//     cout << b << endl;        // 10
    
//     return 0;
// }