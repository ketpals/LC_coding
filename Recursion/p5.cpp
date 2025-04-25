#include<bits/stdc++.h>
using namespace std;

int s(int n){
    if(n==0) return 0;
   return n+s(n-1);

}
int main(){
    int n;
    cin>>n;
    if (n < 0)
    cout << "Please enter a non-negative number." << endl;
else
    cout << "Sum of first " << n << " natural numbers is: " << s(n) << endl;

return 0;
}