#include<bits/stdc++.h>
using namespace std;
bool ana(string s, string t){
unordered_map<char, int> s1;
   //edge case
    if(s.length()!= t.length()) return false;
for(char ch:s) s1[ch]++;
for(char ch:t) s1[ch]--;
for(auto [key,val]:s1){
   if(val!=0) return false;
}
return true;

}
int main(){
    string s = "anagram";
    string g = "nagaram";
    bool ans = ana(s,g);
    if(ans == 0) cout<<"false";
    else cout<<"true";
}