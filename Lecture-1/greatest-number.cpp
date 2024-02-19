#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a, b and c : " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The greatest number is : " << a << endl;
    }
    else if (b > c)
    {
        cout << "The greatest number is : " << b << endl;
    }
    else
    {
        cout << "The greatest number is : " << c << endl;
    }
}