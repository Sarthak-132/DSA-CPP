#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    // declare array
    int number [15];

    // accessing an array
    cout << "Value at 14 Index : " << number[14] << endl;   // Value at 14 Index : 415873655

    // initialising an array
    int second[3] = {5, 7, 11};

    // Accessing an element
    cout << "Value at 2nd Index : " << second[2] << endl;   // Value at 2nd Index : 11

    cout << "Everything is fine" << endl;

    // array with default values
    int third[15] = {2,5,8};   // 2 5 8 0 0 0 0 0 0 0 0 0 0 0 0
    int n = 15;
    // Printing the array 
    for (int i = 0; i < n; i++) {
        cout << third[i] << " ";
    }

    cout << endl;
    
    int forth[10] = {0};   // 0 0 0 0 0 0 0 0 0 0 0 0
    n = 10;
    // Printing the array 
    for (int i = 0; i < n; i++) {
        cout << forth[i] << " ";
    }

    cout << endl;

    
    int fifth[8] = {1};   // 1 0 0 0 0 0 0 0 0 0 0 0
    n = 8;
    // Printing the array 
    for (int i = 0; i < n; i++) {
        cout << fifth[i] << " ";
    }


    return 0;
}