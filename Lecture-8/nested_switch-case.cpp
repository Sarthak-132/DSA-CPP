#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int nume = 2;
    char ch = 'a';
    cout << endl;

    switch(ch)
    // switch(ch)
    {
    case 1: cout << "first" << endl;
        break;

    case 'a': switch(nume){
        case 1: cout<<"Value of num is " << nume << endl;
        break;

        case 2: cout<<"Value of num is " << nume << endl;
        break;
    }
        break;

    
    default: cout << "default" << endl;
        break;
    }   

    cout << endl;
    
    return 0;
}