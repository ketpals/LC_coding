#include<bits/stdc++.h>
using namespace std;

int besttime(vector<int> &v, int n){
    int minnum = INT_MAX;
    int profit =0;

    for(int i=0; i<n;i++){
        minnum = min(v[i],minnum);
        profit = max(v[i] - minnum, profit);
    }
    return profit;
}

int main(){
    vector<int> v = {7,1,5,3,6,4};
    int n = v.size();
    int ans = besttime(v,n);
    cout<<ans;
    return 0;
}