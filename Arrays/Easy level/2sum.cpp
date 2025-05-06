#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &v, int n, int t){
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int num = v[i];
        int diff = t-num;
        if(mp.find(diff) != mp.end()){
            return {mp[diff], i};
        }
        mp[num] = i;
    }
    return{-1,-1};
}

int main(){
    vector<int> v = {2,6,5,8,11};
    int t= 14;
    int n = v.size();
    vector<int> ans = twosum(v,n,t);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}