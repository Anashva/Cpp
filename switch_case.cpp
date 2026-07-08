#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch (ch){
        case 'a':
            cout<<"anashva"<<endl;
            break;
        case 'b':
            cout<<"krishna"<<endl;
            break;
        default:
            cout<<"invali";
    }
    int c=0;
    // while(ch!='$'){
    //     c++;
    //     cin>>ch;
    // }
    cout<<c<<endl;

    // ṭo read whitespace use cin.get();
    ch=cin.get();
    cout<<ch<<endl;
   
}