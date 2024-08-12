#include <iostream>
using namespace std;

int main(){
    int i;

    cout<<"Enter the value of i : "<<endl;
    cin>>i;
    if(i==0){
        cout<<"The number is zero"<<endl;
    }
    else if(i>0){
        cout<<"The number is positive"<<endl;
    } 
    else{
        cout<<"The number is negative"<<endl;
    }
    return 0;
}