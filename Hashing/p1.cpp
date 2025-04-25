#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,2,3,4,4,2};
    int n = v.size();
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
mp[v[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}