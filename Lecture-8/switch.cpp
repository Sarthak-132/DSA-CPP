#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int nume = 2;
    // char ch = "a"
    cout << endl;

    switch(nume)
    // switch(ch)
    {
    case 1: cout << "first" << endl;
        break;
    // case 'a': cout << "first" << endl;
    //     break;

    case 2: cout << "Second" << endl;
        break;

    case 3: cout << "third" << endl;
        break;
    
    default: cout << "default" << endl;
        break;
    }   

    cout << endl;
    
    return 0;
}