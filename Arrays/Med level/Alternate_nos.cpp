#include<bits/stdc++.h>
using namespace std;
//when the number of positives and negatives are not equal in the array
vector<int> an(vector<int> &v, int n){
    vector<int> pos,neg;
    for(int i =0; i<n; i++){
        if(v[i] > 0){
            pos.push_back(v[i]);
        }else{
            neg.push_back(v[i]);
        }
    }
    if(pos.size() > neg.size()){
for(int i =0; i< neg.size(); i++){
    v[i*2] = pos[i];
    v[i*2+1] = neg[i];
    int ind = neg.size() * 2;
    for(int i = neg.size(); i<pos.size(); i++){
        v[ind] = pos[i];
        ind++;
    }
}
    }else{
        for(int i =0; i< pos.size(); i++){
            v[i*2] = pos[i];
            v[i*2+1] = neg[i];
            int ind = pos.size() * 2;
            for(int i = pos.size(); i<neg.size(); i++){
                v[ind] = neg[i];
                ind++;
            }
        }
    }
    return v;
}

int main(){
    vector<int> v = {-1,2,3,4,-3,1};
    int n = v.size();
    vector<int> ans = an(v,n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}