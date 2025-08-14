#include<bits/stdc++.h>
using namespace std;
bool iso(string s, string t){
    if(s.length() != t.length()) return false;

    vector<int> s1 (256,0);
    vector<int> t1(256,0);
    for(int i=0; i<s.length(); i++){
        if(s1[s[i]] != t1[t[i]]) return false;
           s1[s[i]] = i+1;
    t1[t[i]] = i+1;
    }
 return true;
}
int main(){
    string s = "foo";
    string t = "bar";
    bool ans = iso(s,t);
    if(ans == 0) cout<<"false";
    else cout<<"true";
}