#include<iostream>

using namespace std;

int main() {

    int sum = 0;

    int takenNumber;

    cout << "Enter the number : " << endl;

    cin >> takenNumber;

    for (int i = 2; i <= takenNumber; i = i + 2) {

        sum = sum + i;

    }

    cout << sum << endl; 
}