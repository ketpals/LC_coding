#include<bits/stdc++.h>
using namespace std;

int mn(vector<int> &arr, int n){
    unordered_set<int> s;
int ans;
    for(int i =0; i<n; i++){
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(s.find(i) == s.end()){
ans =i;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {0,3,1,4};
    int n = v.size();
    int ans = mn(v,n);
    cout<<ans;

    return 0;
}