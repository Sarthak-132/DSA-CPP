//     *
//   * *
// * * *

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//     int n;

//     cout<<"Enter number : ";
//     cin>>n;

//     for (int i = 1; i <= n; i++){

//         int space = n - i;

//         for

//         for (int j = 1; j <= n; j++){

//         }
//     }
    
    
//     return 0;
// }




//     *
//   * *
// * * *

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cout << "Enter a number : ";

    cin >> n;   

    for (int i = n; i > 0; i--){
        for (int j = 1; j <= n; j++){
            if (j >= i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;

}