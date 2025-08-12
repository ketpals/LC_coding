#include<bits/stdc++.h>
using namespace std;
string reversestr(string s){
      // Step 1: Trim and clean spaces
    int left = 0, right = s.size() - 1;
    while (left <= right && s[left] == ' ') left++;
    while (right >= left && s[right] == ' ') right--;

    int new_pos = 0;
    bool space_seen = false;
    for (int i = left; i <= right; i++) {
        if (s[i] != ' ') {
            s[new_pos++] = s[i];
            space_seen = false;
        } else if (!space_seen) {
            s[new_pos++] = ' ';
            space_seen = true;
        }
    }
    s.resize(new_pos);

         reverse(s.begin(), s.end());

    int n = s.size();
    int start = 0;  // Start of the current word

    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {  // End of word
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;  // Move to next word
        }
    }

    // Optional: Trim leading/trailing spaces if needed
    return s;
}
int main(){
    string s = "hello   world  ";
    string ans = reversestr(s);
    cout<<ans<<endl;
}