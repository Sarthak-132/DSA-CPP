#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int DecimaltoBinary(int n){
    
    int i = 0;

    int answer = 0;

    while( n != 0 ){

        int bit = n & 1;

        answer = (bit * pow(10, i)) + answer;   // math.h for pow

        n = n >> 1;

        i++;

    }

    return answer;

}

int main() {
    
    int n;

    cout << "Enter a number : ";

    cin >> n;


    // if number is negative

    if(n < 0){

        n = n * (-1);

        int ans = DecimaltoBinary(n);

        // Find out 2's comliment
        // first find 1's compliment
        int newAns = (~ans);

        // then 2nd compliment
        newAns = newAns + 1;

        cout << newAns << endl;

    }

    else {
        // if number is positive
        int ans = DecimaltoBinary(n);

        cout << ans << endl;

    }
    
    return 0;
}





