#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
    //base condition
    if(i<0) return;
    cout<<i<<endl;
    f(i-1, n);

}
int main(){
    int n;
    cin>>n;
    f(n,n);
}