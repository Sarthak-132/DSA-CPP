#include<iostream>

using namespace std;

int main() {

    int n;
    int num = 1;

    cout << "Enter the value of n : \n";

    cin >> n ; 

    for (int i = 1 ; i <= n ; i++) {

        cout << num ;

        cout << "\n";

        num = num + 1;
    }

}