#include<bits/stdc++.h>
using namespace std;
vector<int> dup(vector<int> &nums){
     vector<int> ans;
int n = nums.size();
for(int i =0; i<n; i++){
    int idx = abs(nums[i]) - 1;
    if(nums[idx] < 0){
        ans.push_back(idx);
    }else{
        nums[idx] = -nums[idx];
    }
}
        return ans;
}
int main(){
    vector<int> a = {1,1,2};
    vector<int> ans = dup(a);
    for(auto i:ans){
        cout<<i<<" ";
    }

return 0;
}