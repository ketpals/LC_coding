#include<bits/stdc++.h>
using namespace std;

 //Function to reverse array using recursion
 void reverseArray(int arr[], int i, int n) {
if(i>=n/2) return;
swap(arr[i], arr[i-n-1]);
reverseArray(arr,i+1,n);

    
 }
 int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1 };
    reverseArray(arr, 0, n);
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }
    return 0;
 }