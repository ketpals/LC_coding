#include<bits/stdc++.h>
using namespace std;
  int md(string s) {
        int opened =0;
        int cnt=0;
        int maxi =0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
             cnt++;
if(cnt>maxi) maxi = cnt;
            }
            else if(s[i] == ')'){
                  cnt--;
            }

        }
        return maxi;
    }

    int main(){
        string s ="(1)+((2))+(((3)))";
        int ans = md(s);
        cout<<ans;
    }