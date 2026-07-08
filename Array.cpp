#include<iostream>

using namespace std;
int main(){
    // int marks[5]={20,20,56,99,4};//size
    // // double price[10];
    // int pirce[]={23,5,678,1};//4
    // cout<<marks[1]<<endl;
    // return 0;

    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<" "<<max;

    

}