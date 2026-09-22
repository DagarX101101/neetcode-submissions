class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        int r =0;
        int jumps =0;
        while(r<n-1){
            int max_index=0;
            for(int i=l;i<=r;i++){
                int index =i+nums[i];
                max_index=max(max_index ,index);
            }
            jumps++;
            l=r+1;
            r=max_index;
        }
        return jumps;
    }
};
