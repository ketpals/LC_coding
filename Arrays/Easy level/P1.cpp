#include<bits/stdc++.h>
using namespace std;

int sl(vector<int> &arr, int n){
    //naive approach
    // int ans=0;
    // sort(arr.begin(), arr.end());
    // ans = arr[n-2];

    //two pass search approach
    // int l = 0, ans =0;
    // for(int i=0; i<n; i++){
    //     if(arr[i] > l) l = arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     if(arr[i] > ans && arr[i] != l) ans = arr[i];
    // }

    //one pass search solution

    int l =-1, ans = -1;
    for(int i =0; i<n; i++){
        if(arr[i] > l){
            ans = l;
            l = arr[i];
        }
        if(arr[i] < l && arr[i] > ans) ans = arr[i];
    }
    return ans;


}
int main(){
    vector<int> v = {3,2,1,4,3};
    int n = v.size();
    cout<<sl(v,n);
    return 0;
}