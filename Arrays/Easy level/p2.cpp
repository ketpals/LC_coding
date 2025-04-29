#include<bits/stdc++.h>
using namespace std;

bool chk(vector<int>& arr, int n){
int c =0;
for(int i=1; i<n; i++){
    if(arr[i-1] > arr[i]) c++;
}
if(arr[n-1] > arr[0]) c++;
if(c<=1) return true;
else return false;
}

int main(){
    vector<int> v = {2,1,3,4};
    int n =v.size();
    bool ans = chk(v,n);
    if(ans) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}