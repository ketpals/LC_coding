#include<bits/stdc++.h>
using namespace std;

int ls(vector<int> &v, int n){
    unordered_set<int> s(v.begin(), v.end());
    int longest = 0;

    for (int i = 0; i < n; i++) {
        if (s.find(v[i] - 1) == s.end()) {
            int current = v[i];
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }
            longest = max(longest, length);
        }
    }

    return longest;
}


int main(){
    vector<int> v = {2, 6, 1, 9, 4, 5, 3};
    int n = v.size();
    int ans = ls(v,n);
    cout<<ans;
    return 0;
}