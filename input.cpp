#include<iostream>
using namespace std;
void readLine(char a[],char delim){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    // cin.get()-> it will pick the character where input pinter is pointing at and return it
    // ch =cin.get()
    // cin>> it will stop at space character but cin.get() will not stop at space character
    // it does not care whether its pointing to a latin character ,digit or white space character

    char a[100];
    readLine(a,'s');
    cout<<a<<endl;
}