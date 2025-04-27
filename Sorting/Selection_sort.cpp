#include<bits/stdc++.h>
using namespace std;

void ss(vector<int> &arr){
    int min;
    int n = arr.size();
    for(int i=0; i<=n-2;i++){
        min =i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]) min =j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
   

}

int main(){
    vector<int> arr = {5, 4, 4, 1, 1};
    int n = arr.size();
    ss(arr);
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    
    }
    return 0;
}