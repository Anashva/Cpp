#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100,'\n');
    int freq[26]={0};
    int len=strlen(a);
    for(int i=0;i<len;i++){
        freq[a[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<freq[i]<<endl;
    }
}