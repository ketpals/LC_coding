#include<bits/stdc++.h>
using namespace std;
void is(vector<int> arr){
    int n =arr.size();
    for(int i=0; i<=n-1; i++){
        int j =i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}
int main(){
    vector<int> arr = {7, 4, 1, 5, 3};
    int n = arr.size();
    is(arr);
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    
    }
    return 0;
}