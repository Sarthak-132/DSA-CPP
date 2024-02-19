#include <iostream>
using namespace std;

int main(){

    int number;

    std::cout << "Enter the value of number : " << std::endl;

    std::cin >> number;

    int sum = 0;

    for (int i = 1; i <= number; i++)
    {

        sum = sum + i;

    }

    std::cout << sum << std::endl;
    

}