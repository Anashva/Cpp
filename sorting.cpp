#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    if(p1.first==p2.first){
        return p1.second<p2.second;
    }
    else{
        return p1.first<p2.first;
    }
}
int main(){
    // sorting
    // sort(arr,arr+n);-start,end
    // sort(arr,arr+n,greater<int>());-descending order
    // sort(v.begin(),v.end())

    int arr[5]={2,3,6,1,4};
    sort(arr,arr+5);
    for(auto val : arr){
        cout<<val<<" ";
    }

    vector<int> v={2,1,0,-8,7};

    cout<<*(max_element(v.begin(),v.end()))<<endl;
    sort(v.begin(),v.end());
    for(auto val : v){
        cout<<val<<" ";
    }

    vector<pair<int,int>> vp={{1,2},{1,4},{0,1}};
    // sort(vp.begin(),vp.end());
    sort(vp.begin(),vp.end(),compare);
    for(auto val:vp){
        cout<<val.first<<" "<<val.second<<endl;
    }


    // reversse(arr,arr+5);
    reverse(arr,arr+5);
    for(auto val : arr){
        cout<<val<<" ";
    }

    // next permuation
    next_permutation(arr,arr+5);
    for(auto val : arr){
        cout<<val<<" ";
    }
    // prev_permutation(arr,arr+5);
    prev_permutation(arr,arr+5);
    for(auto val : arr){
        cout<<val<<" ";
    }


    // count set bits
    // __builtin_popcount(n);

}