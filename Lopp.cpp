#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // int i=0;
    // while(i<=x){
    //     cout<<i<<endl;
    //     i++;
    // }

    int sum=0;
    for(int i=0;i<x;i++){
        sum+=i;
        // cout<<i<<endl;
    }
    cout<<sum;
    return 0;
    
}