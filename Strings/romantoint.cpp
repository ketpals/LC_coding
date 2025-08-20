#include<bits/stdc++.h>
using namespace std;

int ri(string s){
    unordered_map<char,int> mp;
    int ans=0;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    for(int i = 0; i<s.length()-1; ++i){
        int curr = mp[s[i]];
        int nx = mp[s[i+1]];
        if(curr<nx){
            ans-=curr;
        }else{
            ans+=curr;
        }

    }
        ans+=mp[s[s.length()-1]];
    return ans;
}
int main(){
    string s = "MCMXCIV";
    int ans = ri(s);
    cout<<ans;
}