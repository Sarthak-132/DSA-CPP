#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int power(int a , int b){

    int ans = 1;

    for(int i = 1; i<=b; i++){

        ans = ans * a;

    }

    return ans;

}

 
int main() {
    
    int a, b ;

    cout << "enter a number of a : ";

    cin >> a;   

    cout << "enter a number of b : ";

    cin >> b;  

    int answer = power (a, b);

    cout << answer <<endl;
    
    return 0;

}