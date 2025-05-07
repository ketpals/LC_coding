#include<bits/stdc++.h>
using namespace std;

int me(vector<int> &v, int n){
    map<int,int> mp;
    int ans;
    for(int i=0; i<n; i++){
        mp[v[i]]++;

    }

    for(auto i:mp){
        if(i.second > n/2){
ans = i.first;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {2,2,1,1,1,2,2};
    int n= v.size();
    int ans = me(v,n);
    cout<<ans;
    return 0;
}