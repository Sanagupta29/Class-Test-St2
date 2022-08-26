// Name: Sana Gupta
// Roll no: 2010991709
// Set: 4
// Q1:- Given an integer array find the minimum index of a repeating element in linear time.

#include<bits/stdc++.h>
using namespace std;

int minimum_index_array(int arr[], int n){
    unordered_map <int,int> mp_ans;
    int x = n;
    if(n<=0) throw string("Invalid Input");  // we will be throwing an exception when n<=0
    
    for(int i=0;i<n;i++){
        if(mp_ans.find(arr[i]) != mp_ans.end()){
            x = min(x, mp_ans[arr[i]]);
        }
        else{
            mp_ans[arr[i]]=i;
        }
    }

    if(x == n){
        throw string("Invalid Input"); // no repeating ele means exception case and invalid input will be printed
    } 
    return x;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    try{
        int arr[n];
        cout<<"enter array ele:";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(minimum_index_array(arr,n)){
            cout<<"The minimum index of the repeating element is "<<minimum_index_array(arr,n);
        }
    }
    catch (string &str){
        cout<<str<<endl;
    }
    return 0;
}
