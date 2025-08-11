#include<bits/stdc++.h>
using namespace std;
string removepara(string s){
string ans;
int opened=0;
for(char ch:s){
    if(ch == '('){
       if(opened>0) ans+=ch;
        opened++;
    }else{
        opened--;
        if(opened>0) ans+=ch;

    }
}
return ans;
}
int main(){
    string s = "(()())(())(()(()))";
    string ans = removepara(s);
    cout<<ans<<endl;
}