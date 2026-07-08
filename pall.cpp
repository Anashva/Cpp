#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100,'\n');
    int len=strlen(a);
    int i=0;
    int j=len-1;
    while(i<j){
        if(a[i]!=a[j]){
            cout<<"not found"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"pallindrome"<<endl;
}