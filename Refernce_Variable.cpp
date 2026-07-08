#include<iostream>
using namespace std;
int main(){
    // reference variable:-we can create another name of same bucket
    int x=10;
    int &b=x;
    // b is refernce variable to x
    cout<<x<<endl;
    cout<<b;
}