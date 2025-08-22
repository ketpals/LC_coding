#include<bits/stdc++.h>
using namespace std;
int ns(string s){
    int l = s.length();
    int ans= l*(l+1)/2 ;
    return ans;
}
int main(){
    string s = "abc";
    int ans = ns(s);
    cout<<ans;
}