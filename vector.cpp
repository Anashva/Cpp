#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;//0
    // vector<int> vec={3,2,1};
    // vector<int> vec(3,0);
    // for(int i:vec){
    //     cout<<i<<endl;
    // }
    // cout<<vec[0]<<endl;
    // return 0;
    vector<char> v={'a','b','e','f','g'};
    cout<<v.size()<<endl;
    vec.push_back(25);
    cout<<vec.size();
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    // vector functions:-
}