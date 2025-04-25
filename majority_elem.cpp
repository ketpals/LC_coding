#include<bits/stdc++.h>
using namespace std;
int maje(vector<int> &arr){
    int n = arr.size();
    int ans;
unordered_map<int,int> mp;
for(int i = 0; i<arr.size(); i++){
    mp[i]++;
}
for(auto &i:mp){
if(i.second > n/2){
    ans= i.first;
    break;
}
}
return ans;
}
int main(){
    vector<int> arr = {3,2,3};
    int ans = maje(arr);
    cout<<"The ans is:"<<ans<<endl;
}