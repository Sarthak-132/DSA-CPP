#include <iostream>
using namespace std;

int main() {
    int a[1000];

    for (int i = 0; i < 1000; i++) {
        a[i] = 1;
    }

    // Print the first few elements to verify
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}