#include<bits/stdc++.h>
using namespace std;
//Given number of rows, print the entire pascal triangle
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
    int numRows = 5;
    vector<vector<int>> ans;
        for(int i =1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        for (const auto& row : ans) {
            for (int num : row) {
                cout << num << " ";
            }
            cout << endl;
        }
    
    return 0;
}