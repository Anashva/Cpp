#include <iostream>
using namespace std;
int main(){
    // it terminates the loop
    int n;
    cin>>n;
    int i=1;
    while(i<10){
        if(i==5){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    // using break:-
    // infinite loop
}