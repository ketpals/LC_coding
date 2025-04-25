#include<bits/stdc++.h>
using namespace std;
vector<int> movez(vector<int> &arr){
    int n = arr.size();
    int mz = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
        arr[mz] = arr[i];
        mz++;
        }
    }
    for(int i = mz; i< n; i++){
        arr[i] = 0;
    }
    return arr;
}
int main(){
    vector<int> arr = {0,1,0,3,12};
    vector<int> ans = movez(arr);
    for(auto &i:ans){
        cout<<i<<endl;

    }
            return 0;
}
