#include<bits/stdc++.h>
using namespace std;

int sn(vector<int> v, int n){
    //unordered map approach - TC - O(n) and SC- O(n)
    // unordered_map<int, int> mp;
    // int ans;
    // for(int i =0; i<n;i++){
    //     mp[v[i]]++;
    // }

    // for(auto i:mp){
    //     if(i.second == 1){
    //         ans = i.first;
    //     }
    // }
    // return ans;

    //XOR approach TC-O(n) SC-O(1)

    int ans =0;
    for(int i=0; i<n; i++){
        ans ^= i;
    }
    return ans;
}

int main(){
    vector<int> v = {4,1,2,1,2};
    int n = v.size();

    int ans = sn(v,n);
    cout<<ans;
    return 0;
}