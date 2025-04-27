#include<bits/stdc++.h>
using namespace std;

void bs(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1; i>=1; i--){
        int didswap =0;
for(int j=0; j<=i-1; j++){
    if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        didswap=1;
    }
} 
if(didswap == 0) break;
    }
}

int main(){
    vector<int> arr = {5, 4, 4, 1, 1};
    int n = arr.size();
    bs(arr);
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    
    }
    return 0;
}