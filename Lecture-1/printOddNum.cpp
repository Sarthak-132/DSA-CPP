#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}   



// #include <iostream>
// using namespace std;

// int main(){

//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//         i++;
//     }

//     return 0;
// }

