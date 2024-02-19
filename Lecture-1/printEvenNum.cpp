#include <iostream>
using namespace std;

int main () {
    int n ;
    int number = 2;

    std::cout << "Enter the number : " << std::endl;
    std::cin >> n;

    while(number <= n){
        std::cout << number << std::endl;
        number = number + 2;
    }

    return 0;
}