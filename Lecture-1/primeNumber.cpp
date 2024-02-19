#include <iostream>
using namespace std;

int main()
{

    int i, number, j = 0;

    cout << "Enter the number : " << endl;

    cin >> number;

    // check the prime number

    for (int i = 1; i <= number; i++)
    {

        if ((number % i) == 0)
        {
            j++;
        }
    }

    if (j == 2){
        cout << number << " The number is prime" << endl;
    }
    else{
        cout << number << " The number is not prime" << endl;
    }

    return 0;
}