#include<bits/stdc++.h>
using namespace std;

int ls(vector<int> &arr, int n, int t){
    int ans;
    for(int i=0; i<n; i++){
        if(arr[i] == t){
            ans = i;
            break;
        }
            ans = -1;
    }

    return ans;
}

int main(){
    vector<int> v = {2, -4, 4, 0, 10};
    int t = 6;
    int n = v.size();
    int ans = ls(v,n,t);
    cout<<ans;
    return 0;
}