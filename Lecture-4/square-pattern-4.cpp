// 3 2 1
// 3 2 1
// 3 2 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;

    cin >> n;

    int i = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n-j+1 << " ";
        }
        cout << endl;
    }

    // while (i<=n)
    // {
    //     int j = 1;

    //         while(j<=n){
    //             cout << n-j+1 << " ";
    //             j = j+1;
    //         }

    //     cout<<endl;
    //     i = i+1;
    // }
    
    
    return 0;
}