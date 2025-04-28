#include<bits/stdc++.h>
using namespace std;

void bs(vector<int> &arr, int n){
    //base condition
    if(n==1) return;

    for(int i=0; i<=n-2; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bs(arr, n-1);
}
int main(){
    vector<int> v = {7, 4, 1, 5, 3};
int n = v.size();
    bs(v, n);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}