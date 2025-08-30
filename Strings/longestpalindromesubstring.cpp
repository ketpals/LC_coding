#include<bits/stdc++.h>
using namespace std;
//using expand from the center method

int ex(string s, int left, int right){
    while(left >=0 && right <=s.length() && s[left] == s[right]){
        left--;
        right++;
    }
    return right-left-1;
}

string palin(string s){
    if(s.length() <1) return " ";
    int start =0, maxi =1;
    for(int i =0; i<s.length(); i++){
    int len1 = ex(s,i,i); //odd length palindrome
    int len2 = ex(s, i, i+1); // even length palindrome;
    int len = max(len1, len2);
    if(len>maxi){
        maxi = len;
        start = i-(len-1)/2;
    }
    }
    return s.substr(start,maxi);
}
int main(){
    string a = "madam";
    string ans = palin(a);
    cout<<ans;
}