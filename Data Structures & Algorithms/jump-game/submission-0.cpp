class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxindex=0;
        int i=0;
        while(i<n){
            if(i>maxindex){
                return false;
            }
            int index = i+nums[i];
            maxindex=max(maxindex ,index);
            i++;
        }
        if(maxindex>=n-1){
            return true;
        }
        return false;
    }
};
