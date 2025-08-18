#include<bits/stdc++.h>
using namespace std;
bool rot(string s, string g){
    string ans;
    //edge case
    if(s.length()!= g.length()) return false;
      // If both strings are empty, they can be considered rotated versions of each other.
    // However, constraints state 1 <= s.length, goal.length, so this case won't be hit.
    if(s.empty() || g.empty()) return true;
   ans = s+s;
   if(ans.find(g) == string::npos) return false;
    else return true;

}
int main(){
    string s = "abcde";
    string g = "abced";
    bool ans = rot(s,g);
    if(ans == 0) cout<<"false";
    else cout<<"true";
}