#include<iostream>
#include <cstring>
using namespace std;
int count(char a[]){
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
            return i;
        }
    }
    return 0;
}
int main(){
    char a[100];
    cin.getline(a,100,'\n');
    int ans=count(a);
    cout<<ans<<endl;



    // inbult function to count lenght
    cout<<strlen(a)<<endl;
}