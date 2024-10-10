//       *
//     * *
//   * * *
// * * * *

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cout<<"Enter number : ";
    cin>>n;
    // for (int i = 1; i <= n; i++){

    //     int space = n - i;

    //     for (space; space >= 1; space--) {
    //         cout<<" ";
    //         space = space - 1;
    //     }

    //     for (int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    

    int row = 1;

    while (row <= n){

    // space print 

        int space = n - row;

        while (space){
            cout << " ";
            space = space - 1;    
        }

        // stars printing

        int col = 1;
        
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
        
    }
    
    return 0;
}




//     *
//   * *
// * * *

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//     int n;

//     cout << "Enter a number : ";

//     cin >> n;   

//     for (int i = n; i > 0; i--){
//         for (int j = 1; j <= n; j++){
//             if (j >= i){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
    
//     return 0;

// }