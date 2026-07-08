#include<iostream>
using namespace std;
#include<unordered_set>
int main(){
    unordered_set<int> s;
    // unsorted data structure
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    for(auto val :s){
        cout<<val<<endl;
    }
}