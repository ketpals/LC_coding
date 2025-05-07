#include<bits/stdc++.h>
using namespace std;

void sc(vector<int> &v, int n){
    int r=0,w=0,b=0;
    for(int i=0; i<n; i++){
        if(v[i] == 0) r++;
        else if(v[i] == 1) w++;
        else b++;
    }
    int i=0;
    while(r-- > 0) v[i++] =0;
    while(w-- >0) v[i++] = 1;
    while(b-- >0) v[i++] = 2;
}

int main(){
    vector<int> v = {2,0,2,1,1,0};
    int n = v.size();
    sc(v,n);
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}