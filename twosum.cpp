#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int t);


int main(){
    int n,t;
    vector<int> ans;
    vector<int> arr;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter target:"<<endl;
    cin>>t;
     arr.resize(n); 

    cout<<"enter n elements of the array";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    ans = twoSum(arr, t);
    cout<<"The answer is:";
    for(int i:ans){
        cout<<i;
    }
return 0;
}
vector<int> twoSum(vector<int> &arr, int t){
    unordered_map<int,int> ind;
    for(int i = 0; i<arr.size(); i++){
    if(ind.find(t - arr[i])!= ind.end()){
return{ind[t-arr[i]],i};
    }
    ind[arr[i]] = i;
    }
    return{-1,-1};
}