#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    std::cout << "Enter the value of a, b and c : " << std::endl;
    std::cin >> a >> b >> c;

    if ((a + b) > c && (a + c) > b && (b + c) > a){
        std::cout << "Triangle is valid" << std::endl;
    }

    else{
        std::cout << "Triangle is not valid" << std::endl;
    }
    return 0;
}