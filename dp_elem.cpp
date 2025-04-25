#include<bits/stdc++.h>
using namespace std;
bool dup(vector<int> &arr){
int n = arr.size();
unordered_map<int,int> mp;
for(int i =0; i<n; i++){
mp[arr[i]]++;
if(mp[arr[i]] > 1){
        return true;
        break;
    }
}
return false;
    
}

int main(){
    vector<int> arr = {1,2,3,1};
    bool ans = dup(arr);
    if(ans) cout<<"True"<<endl;
    else cout<<"False"<<endl;
   return 0;
}
