#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    // int temp = a;
    // a=b;
    // b = temp;
    // cout<<a<<endl;
    // cout<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}