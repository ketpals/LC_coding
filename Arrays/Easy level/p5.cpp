#include<bits/stdc++.h>
using namespace std;

void movezeros(vector<int> &arr, int n){
    int mz = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[mz] = arr[i];
            mz++;
        }
    }
    for(int i=mz; i<n; i++){
        arr[i] = 0;
    }
}
int main(){
    vector<int> v = {0,9,0,2,0,6};
    int n = v.size();
    movezeros(v,n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}