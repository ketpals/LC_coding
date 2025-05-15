#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threes(vector<int> &v, int n){
    vector<vector<int>> ans;
sort(v.begin(), v.end());
for(int i =0; i<n; i++){
    if(i>0 && v[i] == v[i-1]) continue;
    int j = i+1;
    int k = n-1;
    while(j<k){
        int sum = v[i] + v[j] + v[k];
        if(sum<0) j++;
        else if(sum>0) k--;
        else{
            vector<int> t = {v[i], v[j], v[k]};
            ans.push_back(t);
            j++;
            k--;
            while(j<k && v[j] == v[j-1]) j++;
            while(j<k && v[k] == v[k+1]) k--;
        }
    }
}
return ans;
}

int main(){
    vector<int> v = {-1,0,1,2,-1,-4};
    int n = v.size();
    vector<vector<int>> ans = threes(v,n);
    for(const auto &i:ans){
        for(int num:i){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}