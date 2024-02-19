#include <iostream>
using namespace std;

int main (){

    int n , sum;

    sum = 0;

    std::cout << "Enter the value of n : " << std::endl;

    std::cin >> n;

    for(int i = 1 ; i <= n ; i++){

        sum += 1;

    std::cout << sum << std::endl;

    }

    return 0;
    
}