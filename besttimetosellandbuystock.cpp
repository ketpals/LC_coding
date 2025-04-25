#include<bits/stdc++.h>
using namespace std;
int besttime(vector<int> &arr){
    int minp = INT_MAX;
    int pro = 0;
    for(int i =0; i<arr.size(); i++){
        if(arr[i]<minp){
            minp = arr[i];
        }
        int prof = arr[i] - minp;
        if(prof > pro){
            pro = prof;
        }
    }
    return pro;
}
int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int ans = besttime(arr);
    cout<<"The answer is:";
    cout<<ans<<endl;
}