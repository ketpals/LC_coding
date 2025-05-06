#include<bits/stdc++.h>
using namespace std;

int ls(vector<int> &v, int n, int k){
    int left =0, right =0;
    long long int sum =v[0];
    int maxlen =0;
    while(right<n){
        while(left<=right && sum >k){
            sum-=v[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right-left+1);
        }
        right++;
        if(right<n){
            sum+= v[right];
        }
    }
    return maxlen;

}

int main(){
    vector<int> v = {2,0,0,0,3};
    int k =3;
    int n= v.size();

int ans = ls(v,n,k);
cout<<ans;
return 0;
}