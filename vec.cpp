#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;// dynamic array
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<v.size()<<endl;
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.erase(v.begin()+2); // Remove element at index 2 (value 30)
    for(int val:v){
        cout<<val<<" ";
    }
    v.insert(v.begin()+1,90); // Insert 90 at index 1
    v.pop_back();
    v.clear();
    cout<<v.size()<<endl;
    vector<int> v1={1,2,34};
    vector<int> v2{3,10};


    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

}