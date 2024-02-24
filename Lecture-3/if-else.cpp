#include <iostream>

using namespace std;

int main()
{
    int a,b;
    a = 2;
    b = a + 1;

    if((a=3)==b){       // false condition output : 3
        cout<<a;
    }

    else{
        cout<<a+1;
    }

    return 0;
}