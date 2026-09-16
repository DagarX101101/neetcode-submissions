#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(st.size()<nums.size()){
            return true;
        }
        else{
            return false;
        }
    }
};