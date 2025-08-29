#include<bits/stdc++.h>
using namespace std;
int at(string s){
    int l = s.length();
    int ans =0;
    int maxi = INT_MAX;
    int mini = INT_MIN;
    int sign = -1;
    for(int i =0; i<l; i++){
        if(s[i] == " ") s=s.substr(i);
        
    }
}
int main(){
    string s = "  -0423abc";
    int ans = at(s);
    cout<<ans;
}