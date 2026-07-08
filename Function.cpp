#include<iostream>
using namespace std;

// function
//  advantage-readibility ,organises our code,reusability
void greet(){
    cout<<"hello world"<<endl;

}
int add(int a,int b){
    return a+b;
}

int check(int n){
    return (n &1)==0;
}


int main(){
// datatype function_name(){//statement return;}
greet();

int sum=add(5,7);
cout<<sum<<endl;

 int n;
 cin>>n;
 if(check(n)){
    cout<<"even";
 }

 else{
    cout<<"odd";
 }

//  forward declaration-writing function prototype before main
// int mul(int,int);-forward declaration- upar bs function banana but usko main function k niche use kr skte h
// compilation occur from top to bottom 
// if we define any function and calling any ohter function in it then we should declare function that function before this one
// call by value:-in this method actual parameter's value is copied to formal parameter
// call by reference:-in this method address of actual parameter is copied to formal parameter




// call stack:-
}