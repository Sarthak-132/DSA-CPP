// C++ implementation of the above approach

#include <bits/stdc++.h>

using namespace std;
 
void check(char ch)
{
 
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character\n";
 
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character\n";
 
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is an numeric character\n";
}
 
// Driver Code
int main()
{
    char ch;
 
    // Get the character/ uppercase / lowercase / 
    cin>>ch;
 
    // Check the character
    check(ch);
 
    return 0;
}
 