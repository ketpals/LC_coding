#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr, int s, int e){
while(s<=e){
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    s++;
    e--;

}
}
void ra(vector<int> &arr, int n, int d){
    //brute force method
    // vector<int> temp(d);
    // for(int i=0; i<d; i++){
    //     temp[i] = arr[i];
    // }
    // for(int i=d; i<n; i++){
    //     arr[i-d] = arr[i];
    // }
    // for(int i=n-d; i<n; i++){
    //     arr[i] = temp[(i-(n-d))];
    // }

    //optimal approach
    reverse(arr,arr.begin(), arr.end());

        reverse(arr,arr.begin(), arr.end()+d%n);
        reverse(arr,arr.begin()+d%n, arr.end());
    }


int main(){
vector<int> v = {1,2,3,4,5};
int n = v.size();
ra(v,n, 3);
for(int i =0; i<n;i++){
    cout<<v[i]<<" ";
}
return 0;
}