#include<bits/stdc++.h>
using namespace std;

void lr(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    lr(v,n);
    for(int i =0; i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}