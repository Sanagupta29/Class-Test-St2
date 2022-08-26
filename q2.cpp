// Name: Sana Gupta
// Roll no: 2010991709
// Set: 4
// Q2:- check if only consecutive int form the array

#include<bits/stdc++.h>
using namespace std;

bool check_consec_int(long long arr[],long long n){
    if(n<=0){
        throw string("array size less than or equal to 0");
    } 
    unordered_set <long long> st_ans(arr,arr+n);
    
    long long minEle = *min_element(arr,arr+n);
    if(st_ans.size()!=n){
        return false;
    }

    for(long long i=1;i<n;i++){  // checking the next n-1 consecutive ele
        if(st_ans.find(minEle+i) == st_ans.end()){ 
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    cin>>n;

    try{
        long long arr[n];
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }
        if(check_consec_int(arr,n)){
            cout<<"The array contains consecutive integers";
        }
        else{
            cout<<"The array does not contains consecutive integers";
        }
    }

    catch (string &str){
        cout<<str<<endl;

    }
    return 0;
}
