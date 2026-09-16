class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n =  nums .size();
        map<int, int  >mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for( auto it : mp){
           vec.push_back({it.second, it.first}); 
        }
        sort(vec.rbegin(),vec.rend());
        vector<int>ans;
        int i=0;
        while(k>0){
            ans.push_back(vec[i].second);
            k--;i++;
        }
        return ans ;
    }
};
