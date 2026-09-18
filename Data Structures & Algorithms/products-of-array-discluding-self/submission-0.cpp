class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n,1);
        vector<int>vec2(n,1);
        for(int i=1;i<n;i++){
            vec[i]=vec[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            vec2[i]=vec2[i+1]*nums[i+1];
            vec[i]*=vec2[i];
        }
        return vec;
    }
};
