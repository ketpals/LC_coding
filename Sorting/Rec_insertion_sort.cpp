#include<bits/stdc++.h>
using namespace std;

void is(vector<int> &arr, int i, int n){
    //base condition
    if(i==n) return;

    int j=i;
    while(j>0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    is(arr, i+1, n);
}

int main(){
    vector<int> v = {7, 4, 1, 5, 3};
int n = v.size();
    is(v, 0, n);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}