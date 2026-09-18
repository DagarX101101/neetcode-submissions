class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        // 1. Count frequency
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        // 2. Buckets
        vector<vector<int>> bucket(n + 1);

        // 3. Put elements according to frequency
        for (auto it : freq) {
            int element = it.first;
            int count = it.second;

            bucket[count].push_back(element);
        }

        // 4. Traverse from highest frequency
        vector<int> ans;

        for (int i = n; i >= 1 && ans.size() < k; i--) {

            for (int x : bucket[i]) {
                ans.push_back(x);

                if (ans.size() == k) {
                    break;
                }
            }
        }

        return ans;
    }
};