#include<bits/stdc++.h>
using namespace std;
int beaut(string s){
    int l = s.length();
    int ans=0;
    for(int i=0; i<l; i++){
                   unordered_map<char,int> mp;
        for(int j=i; j<l; j++){
         mp[s[j]]++;
             int maxi = INT_MIN;
             int mini = INT_MAX;
             for(auto const&pair : mp){
                maxi = max(maxi,pair.second);
                mini = min(mini,pair.second);
             }
            ans+= maxi-mini;
             
        }
      
    }
    return ans;
}
int main(){
    string a = "aabcbaa";
    int ans = beaut(a);
    cout<<ans;
}