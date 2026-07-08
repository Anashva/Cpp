#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(50);
    for(int val:d){
        cout<<val<<endl;
    }

    pair<int,int> p={3,5};
    pair<int ,pair<string,int>> p1={1,{"abs",10}};
    cout<<p.first<<endl;
    cout<<p1.second.first<<endl;


    vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
    for(pair<int,int> l:v){
        cout<< l.first<< " "<<l.second<<endl;
    }

}