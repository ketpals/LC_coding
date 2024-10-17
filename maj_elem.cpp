#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int> nums(n);
    for(int i =0; i<n; i++) cin>>nums[i];
     int ans;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto &i:mp){
        if(i.second > n/2){
ans = i.first;
break;
        }
        }
        cout<<ans<<endl;
        return 0;
    

}
