#include<bits/stdc++.h>
using namespace std;
//Given Row number, print the entire row in the pascal triangle
vector<int> generateRow(int r){
    long long ans =1;
    vector<int> res;
    res.push_back(1);
for(int i=1; i<r; i++){
    ans = ans*(r-i);
    ans /= (i);
    res.push_back(ans);
}
return res;
}

int main(){
    int n =4;
    vector<int> ans = generateRow(n);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}