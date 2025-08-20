#include<bits/stdc++.h>
using namespace std;

string fs(string s){
 unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>> v(mp.begin(), mp.end());
        sort(v.begin(),v.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });
string ans = "";
for(const auto&i:v){
    ans.append(i.second, i.first);
}
return ans;
}
int main(){
    string s="Aabb";
    string ans = fs(s);
    cout<<ans;
}