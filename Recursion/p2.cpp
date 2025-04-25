#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
    //base condition
    if(i>n) return;
    cout<<i;
    cout<<endl;
    f(i+1, n);
}
int main(){
    int n, i=1;
    cin>>n;
    f(i,n);
}