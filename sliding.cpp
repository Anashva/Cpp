#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char a[100];
    cin.getline(a,100,'\n');
    int n;
    cin>>n;
    int len=strlen(a);
    int end=0;
    int start=0;
    int ans=0;
    int x=0;
    int freq[26]={0};
    while(end<len){
        freq[a[end]-'a']++;
        if(freq[a[end]-'a']==1){
            x++;
        }
        while(x>n){
            freq[a[start]-'a']--;
            if(freq[a[start]-'a']==0){
                x--;
            }
            start++;
        }
        if(x==n){
            ans=max(ans,end-start+1);
        }
        end++;
    }
    cout<<ans<<endl;
}