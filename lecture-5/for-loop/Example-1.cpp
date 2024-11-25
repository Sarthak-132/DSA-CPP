#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    
    cout << "enter a number : ";

    cin >> n;

    cout << "Print number from 1 to n : " << endl;

    // for(int i = 1; i <= n; i++){
        
    //     cout << i << endl;
    // }


    // or   

    

    int i = 1;

    for( ; ; ){

        if(i<=n){

            cout << i << endl;   // In infinite loop
        }
        else{

            break;               // for stoping infinite loop
        }

        i++;
    }
    
    return 0;
}