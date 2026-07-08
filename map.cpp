#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> mp;
    mp[4]="abc";
    mp[2]="def";
    mp[3]="rgh";
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.count(2)<<endl;

    if(mp.find(3)!=mp.end()){
        cout<<"found<<"<<endl;
    }
}