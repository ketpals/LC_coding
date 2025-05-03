#include<bits/stdc++.h>
using namespace std;
//using set DS - TC - O(nlogn) SC - O(n)
// set<int> fu(vector<int> &a1, vector<int> &a2){
//     a1.insert(a1.end(), a2.begin(), a2.end());
//     set<int> s;
//     for(int i : a1){
//         s.insert(i);
//     }
//     return s;
// }

//using vector TC - O(nlogn) SC - O(n)
vector<int> fu(vector<int> &a1, vector<int> &a2){
    a1.insert(a1.end(), a2.begin(), a2.end());
    sort(a1.begin(), a1.end());
    a1.erase(unique(a1.begin(), a1.end()), a1.end());

    return a1;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v1 = {1,2,7};
    vector<int> s = fu(v,v1);
    for(auto i:s){
        cout<<i<<" ";

    }
    return 0;
}