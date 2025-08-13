#include<bits/stdc++.h>
using namespace std;
string largenum(string s){
string ans = "";
int l = s.length();
int start =0;
int end = l-1;
while(end>=start && s[end]%2==0) end--;

    for(int i=start;i<=end; i++){
     ans+=s[i];
        }
return ans;
}
int main(){
    string n = "52";
    string ans = largenum(n);
    cout<<ans<<endl;
}