class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m){
            return false;
        }
        // unordered_map<char,int>mp;
        vector<int>vec(26);
        for(int i=0;i<n;i++){
            // mp[s[i]]++;
            // mp[t[i]]--;
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        for(auto it : vec){
            if(it!=0){
                return false;
            }
        }
        return true;
    }
};