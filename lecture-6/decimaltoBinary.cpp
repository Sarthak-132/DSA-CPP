// decimal to binary                 

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
int main() {
    
    int n;

    cout << "Enter a number : ";

    cin >> n;

    int answer = 0;

    int i = 0;

    while( n != 0 ){

        int bit = n & 1;
         
        answer = (bit * pow(10, i)) + answer;   // math.h for pow

        n = n >> 1;

        i++;

    }

    cout << "Answer is " << answer << endl;
     
}