#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the value of n : " << endl;

    cin >> n;

    if(n==0){
        cout << "Number is zero" << endl;
    }
    else if(n>0){
        cout << "Number is positive" << endl;
    }
    else{
        cout << "Number is negative" << endl;
        
    }
}