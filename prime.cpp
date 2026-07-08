#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"not prime";
    }
    else{
        cout<<"prime"<<endl;
    }


    // continue statement:-it takes to next iteration
}