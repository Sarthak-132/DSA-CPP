#include <iostream>
using namespace std;

int main(){
    int P,R,T;
    float SI;

    cout<<"Enter the value of P : "<<endl;
    cin >> P;

    cout<<"Enter the value of R : "<<endl;
    cin >> R;

    cout<<"Enter the value of T : "<<endl;
    cin >> T;

    SI = (P*R*T)/100;

    cout << "Simple Interest is : " << SI << endl;
}
