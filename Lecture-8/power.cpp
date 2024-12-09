#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a , b;

    int ans = 1;
                                                                                     
    cout << "enter a number of a : ";

    cin >> a;   

    cout << "enter a number of b : ";

    cin >> b;   
    
    for ( int i = 1 ; i <= b; i++){

        ans = ans * a;

    }

    cout << ans << endl;




    int c , d;

    int an = 1;

    cout << "enter a number of c : ";

    cin >> c;   

    cout << "enter a number of d : ";

    cin >> d;   
    
    for ( int i = 1 ; i <= d; i++){

        an = an * c;

    }

    cout << an << endl;

    return 0;
}