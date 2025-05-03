#include<bits/stdc++.h>
using namespace std;

int co(vector<int> &arr, int n){
    int c =0, m=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            c++;
            m = max(m,c);
                }else{
                    c =0;
                }
    }
    return m;
}

int main(){
    vector<int> v = {1,1,0,1,1,1};
    int n = v.size();
    int ans = co(v,n);
    cout<<ans;
    return 0;
}