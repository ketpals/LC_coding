#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n) return;
    cout<<"Ket";
    f(i+1,n);
}
int main(){
    int n;
    int i =1;
    cin>>n;
    f(i,n);
    return 0;
}