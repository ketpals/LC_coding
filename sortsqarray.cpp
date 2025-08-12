#include<bits/stdc++.h>
using namespace std;
vector<int> ssa(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n);
    int l=0, r= n-1, idx = n-1;

    while(l<=r){
         int ls = arr[l] * arr[l];
    int rs = arr[r] * arr[r];
        if(ls>rs){
            res[idx] = ls;
            l++;
        }else{
            res[idx] = rs;
            r--;
        }
        idx--;
        
    }
    return res;
}
int main(){
    vector<int> arr = {-4, -1, 0, 3, 10};
    vector<int> ans = ssa(arr);
    for(auto &i:ans){
        cout<<i<<endl;
    } 
    return 0;
}
