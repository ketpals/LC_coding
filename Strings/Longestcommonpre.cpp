#include<bits/stdc++.h>
using namespace std;
    string lcp(vector<string>& strs) {
        if(strs.empty()){
            return ""; //edge case
        }
        sort(strs.begin(), strs.end()); //sort it lexographically
            int n = strs.size();
            string f = strs[0];
            string l = strs.back();

            string ans = "";
            for(int i=0; i<f.length(); ++i){
                if(i< l.length() && f[i] == l[i]){
                    ans+=f[i];
                }else{
                    break;
                }
            }
return ans;

    }

int main(){
    vector<string> s = {"dog","racecar","car"};
    string ans = lcp(s);

    cout<<ans<<endl;
    return 0;
}