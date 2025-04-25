#include<bits/stdc++.h>
using namespace std;
 void sortColors(vector<int>& nums) {
        int r = 0, w =0, b = 0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i] == 0) r++;
           else if(nums[i] == 1) w++;
            else b++;
        }
        // cout<<"the R is"<<r<<endl;
        //         cout<<"the W is"<<w<<endl;

        // cout<<"the B is"<<b<<endl;
        while(r>0){
                    for(int i = 0; i<r; i++) nums[i] = 0;
                    break;

        }
          while(w>0){
                    for(int i = r; i<w; i++) nums[i] = 1;
                    break;

        }
          while(b>0){
                    for(int i = w; i<b; i++) nums[i] = 2;
                    break;

        }
        // for(int i = 0; i<=r; i++) nums[i] = 0;
        // for(int j = r; j<=w; j++) nums[j] = 1;
        // for(int k = w; k<=b; k++) nums[k] = 2;
    }
int main(){
vector<int> v = {2,0,1};
 sortColors(v);
 return 0;
}

