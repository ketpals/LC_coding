#include<bits/stdc++.h>
using namespace std;

int part(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<= high-1) i++;
        while(arr[j] > pivot && j>=low+1) j--;
        if(i<j) {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
            arr[low]=arr[j];
            arr[j] = temp;
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int p = part(arr, low, high);
        qs(arr, low, p-1);
        qs(arr, p+1, high);
    }
}
int main(){
    vector<int> v = {7, 4, 1, 5, 3};
int n = v.size();
    qs(v, 0, n-1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}