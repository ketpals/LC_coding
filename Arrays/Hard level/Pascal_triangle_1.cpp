#include<bits/stdc++.h>
using namespace std;
//Given R and C, print the element at that position
long long ncr(int n, int r){
    long long ans =1;
for(int i=0; i<r; i++){
    ans = ans*(n-i);
    ans /= (i+1);
}
return ans;
}

int main(){
    int n =4, r =3;
    long long ans = ncr(n-1, r-1);
    cout<<ans;
    return 0;
}