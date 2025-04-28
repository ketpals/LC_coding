#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left =low, right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;

        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
        }
        for(int i = low; i<=high; i++){
            arr[i] = temp[i-low];
        }
}

void ms(vector<int> &arr, int low,int high){
    if(low ==  high) return;
    int mid = (low+high)/2;
    ms(arr, low, mid);
    ms(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    vector<int> v = {7, 4, 1, 5, 3};
    int low =0;
    int high = v.size() -1;
    ms(v, low, high);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}