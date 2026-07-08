#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[100];
    cin.get(); // to consume the newline character after reading n
    for(int i=0;i<n;i++){
        cin.getline(a,100,'\n');
        cout<<a<<endl;
    }
}