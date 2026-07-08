#include<iostream>
using namespace std;
int main(){
    // pointer-buckt to store address  of variable
    int a=10;
    int *p=&a;
    char c[]="abdns";
    cout<<(int*)c<<endl;// address of first element of char array
    cout<<p<<endl;
    cout<<sizeof(p)<<endl;// 8 bytes on 64 bit system
    cout<<*p<<endl;// 10- dereference operator-to get value from address
}