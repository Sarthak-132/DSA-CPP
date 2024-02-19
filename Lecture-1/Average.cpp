#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Enter the value of a, b and c : " << endl;
    cin >> a >> b >> c;

    float avg = (a+b+c)/3;

    cout << "The average is : " << avg << endl;

    return 0;
}