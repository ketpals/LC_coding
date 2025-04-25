#include<bits/stdc++.h>
using namespace std;

int f(vector<int>& v, int k){
    int RES = 0, L = 0, R = 0, n = v.size();
    int total = 0;
    sort(v.begin(),v.end());

    while (R<n) {
        total += v[R];
        while (v[R]*(R-L+1) > total+k){
            total -= v[L];
            L++;
        } 
        RES = max(RES,R-L+1);
        R++;
    }

    return RES;
}
int main(){
vector<int> v = {1,2,4};
int k =5;
cout<<f(v, k)<<endl;


}