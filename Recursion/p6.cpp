#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0) return 1;
    return n*f(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"The fact of"<<n<<"is: "<<f(n)<<endl;
    return 0;
}