#include<iostream>
#include<bits/stdc++.h>
using namespace std

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> left;
        vector<int> right; 
        for(int i =0; i<n; i++){
            left.push_back(nums[i]);
        }
        for(int i = n; i< 2*n;  i++){
            right.push_back(nums[i]);
        }
        int i = 0,j = 0; 
        for(int p  = 0; p<2*n; p++){
            if(p%2 == 0){
                nums[p] = left[i];
                i++; 
            }
            else if(p%2 != 0) {
                nums[p] = right[j];
                j++; 
            }
        }
        return nums;
        
    }
};

int main(){
    Solution hey; 
    int num; 
    cin >> num; 
    vector<int> nums; 
    for(int i = 0; i< num; i++){
        int a; 
        cin >> a; 
        nums.push_back(a);
    }
    int n; 
    cin >> n; 
    vector<int> r; 
     r =  hey.shuffle(nums, n);
    for(int i = 0; i< r.size(); i++ ){
        cout << r[i]<<" "; 
    }
    return 0; 
}