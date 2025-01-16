#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Hold
void printArray(int arr[], int size){
    cout << "Printing the Array" << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
 

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
    printArray(third, n);

    cout << endl;
    
    int forth[10] = {0};   // 0 0 0 0 0 0 0 0 0 0 0 0
    n = 10;
    // Printing the array 
    printArray(forth, n);

    cout << endl;

    
    int fifth[8] = {1};   // 1 0 0 0 0 0 0 0 0 0 0 0
    n = 8;
    // Printing the array 
    printArray(fifth, n);

    return 0;
    
}