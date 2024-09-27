// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int i,j,n;

    int count = 1;

    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout<< count <<" ";
            count = count + 1;
        }
        cout<<endl;
    }
    
    return 0;
}