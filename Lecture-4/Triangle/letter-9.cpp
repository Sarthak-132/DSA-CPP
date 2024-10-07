// D
// C D
// B C D
// A B C D


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cout << "Enter number : " << endl;

    cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    
    return 0;

}