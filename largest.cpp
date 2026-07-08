#include<iostream>
#include <cstring>
using namespace std;

void copy(char b[100],char a[100]){
    int len=strlen(a);
    for(int i=0;i<=len;i++){
        b[i]=a[i];
    }
    return;
}
int main(){
    char a[100];
    char b[100];
    int largest=0;
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100,'\n');
        if(largest<strlen(a)){
            largest=strlen(a);
            copy(b,a);
        }
    }
    cout<<largest<<endl;
    cout<<b<<endl;
}