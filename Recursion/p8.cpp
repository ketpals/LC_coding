#include <iostream>
#include <string>
using namespace std;

bool chkpal(string &s, int i){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return chkpal(s,i+1);
}

int main(){
    string s = "madam";
    cout << (chkpal(s, 0) ? "Palindrome" : "Not a palindrome");

}