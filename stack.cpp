#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(9);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(9);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    priority_queue<int> p;
    p.push(2);
    p.push(4);
    p.push(9);
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }

    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(12);
    pq.push(4);
    pq.push(9);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}