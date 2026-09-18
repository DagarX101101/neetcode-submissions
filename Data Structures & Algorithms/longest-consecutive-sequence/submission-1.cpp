class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>hashset;
        int n = nums.size();
        for(int i =0;i<n; i++ ){
            hashset.insert(nums[i]);
        }
        int cnt2 =0;
        for(int i =0;i<n; i++ ){
            if(!hashset.count(nums[i]-1)){
                int num = nums[i]-1;
                int cnt =0;
                while(hashset.count(num+1)){
                    cnt=cnt+1;
                    num = num+1;
                    cnt2=max(cnt, cnt2);
                }
            }
        }
        return cnt2;
    }
};
