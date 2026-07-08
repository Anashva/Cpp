#include<iostream>
using namespace std;
int bns(int n){
    int ans=0;
    int p=1;
    while(n>0){
        ans+=p*(n%2);
        p*=10;
        n/=2;
    }
    return ans;
}
int main(){
    cout<<"bns"<<endl;
    cout<<bns(13);
}