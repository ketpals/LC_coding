#include<bits/stdc++.h>
using namespace std;

int ssk(vector<int> &v, int n, int k){
int sum=0, count =0;
unordered_map<int,int> mp;
mp[0] = 1;
for(int i=0;i<n; i++){
    sum+= v[i];
    if(mp.find(sum-k) != mp.end()){
        count+=mp[sum-k];
    }
    mp[sum]++;

}
return count;
}

int main(){
    vector<int> v = {1,1,1};
    int n = v.size();
    int k =2;
    int ans = ssk(v,n,k);
    cout<<ans;
    return 0;
}