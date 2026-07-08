#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={4,3,5,7,1};
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }


    int a2=10;
    cout<<&a2<<endl;//0x+hexadecimal value of a2
    
}